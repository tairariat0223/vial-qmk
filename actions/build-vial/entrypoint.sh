#!/bin/bash
set -e

KEYBOARD=$1
KEYMAP=$2

echo "Building Vial firmware for $KEYBOARD:$KEYMAP"

# Clone if not exists
if [ ! -d "vial-qmk" ]; then
  git clone --depth 1 https://github.com/vial-kb/vial-qmk.git
fi

cd vial-qmk

# QMK_HOMEを強制設定（重要！）
export QMK_HOME=$(pwd)

# QMKを明示的に初期化
qmk setup -y

# keyboards/33hand が存在するか確認
echo "Checking keyboards folder..."
ls keyboards | grep "$KEYBOARD" || (echo "Keyboard folder not found!"; exit 1)

# ファームウェアをビルド
qmk compile -kb "$KEYBOARD" -km "$KEYMAP"

# 成果物を出力フォルダにコピー
mkdir -p /github/workspace/output
cp *.hex *.uf2 /github/workspace/output 2>/dev/null || true

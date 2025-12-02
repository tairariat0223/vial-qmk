#!/bin/bash
set -e

KEYBOARD=$1
KEYMAP=$2

echo "🔧 Building Vial firmware for $KEYBOARD:$KEYMAP"

# あなたのフォークからクローン
if [ ! -d "vial-qmk" ]; then
  echo "Cloning your forked vial-qmk..."
  git clone --depth 1 --branch cleanup-keyboards https://github.com/tairariat0223/vial-qmk.git
fi

cd vial-qmk

# QMK_HOMEを設定
export QMK_HOME=$(pwd)

# uv が使う Python を 3.12 に固定 251203
export UV_PYTHON=3.12

# 確認（デバッグ用）
echo "📁 Checking keyboards folder..."
ls keyboards || true
ls keyboards/* || true

# QMK環境セットアップ
qmk setup -y

# ビルド実行
echo "⚙️ Compiling firmware..."
qmk compile -kb "$KEYBOARD" -km "$KEYMAP"

# 成果物をコピー
mkdir -p /github/workspace/output
cp *.hex *.uf2 /github/workspace/output 2>/dev/null || true

echo "✅ Build complete. Firmware files stored in /github/workspace/output"

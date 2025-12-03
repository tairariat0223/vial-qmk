#!/bin/bash
set -e

KEYBOARD=$1
KEYMAP=$2

if [ -z "$KEYBOARD" ] || [ -z "$KEYMAP" ]; then
  echo "Usage: $0 <keyboard> <keymap>"
  exit 1
fi

echo "🔧 Building Vial firmware for ${KEYBOARD}:${KEYMAP}"

# vial-qmk のクローン
if [ ! -d "vial-qmk" ]; then
  echo "Cloning your forked vial-qmk..."
  git clone --depth 1 --branch cleanup-keyboards https://github.com/tairariat0223/vial-qmk.git
fi

cd vial-qmk

# QMK_HOME を設定
export QMK_HOME=$(pwd)

# 仮想環境の Python を有効化
source /opt/qmk-venv/bin/activate

# QMK 環境セットアップ（初回のみ）
qmk setup -y

# キーボードフォルダ確認（デバッグ用）
echo "📁 Checking keyboards folder..."
ls keyboards || true
ls keyboards/* || true

# ファームウェアビルド
echo "⚙️ Compiling firmware..."
qmk compile -kb "$KEYBOARD" -km "$KEYMAP"

# 成果物コピー
mkdir -p /github/workspace/output
cp *.hex *.uf2 /github/workspace/output 2>/dev/null || true

echo "✅ Build complete. Firmware files stored in /github/workspace/output"

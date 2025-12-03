#!/bin/bash
set -e

# GitHub Actions から渡される引数
KEYBOARD=$1
KEYMAP=$2

if [ -z "$KEYBOARD" ] || [ -z "$KEYMAP" ]; then
  echo "❌ Missing keyboard or keymap argument."
  echo "Usage: $0 <keyboard> <keymap>"
  exit 1
fi

echo "🔧 Building Vial firmware for $KEYBOARD:$KEYMAP"

# フォークから Vial-QMK をクローン
if [ ! -d "vial-qmk" ]; then
  echo "Cloning your forked vial-qmk..."
  git clone --depth 1 --branch cleanup-keyboards https://github.com/tairariat0223/vial-qmk.git
fi

cd vial-qmk

# QMK_HOME 設定
export QMK_HOME=$(pwd)
export UV_PYTHON=3.10

# デバッグ用: keyboards フォルダ確認
echo "📁 Checking keyboards folder..."
ls keyboards || true
ls keyboards/* || true

# QMK 環境セットアップ
qmk setup -y

# ファームウェアビルド
echo "⚙️ Compiling firmware..."
qmk compile -kb "$KEYBOARD" -km "$KEYMAP"

# 出力先ディレクトリ作成
mkdir -p /github/workspace/output
cp *.hex *.uf2 /github/workspace/output 2>/dev/null || true

echo "✅ Build complete. Firmware files stored in /github/workspace/output"

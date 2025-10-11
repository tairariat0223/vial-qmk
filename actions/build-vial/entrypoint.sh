#!/bin/bash
set -e

KEYBOARD=$1
KEYMAP=$2

echo "Building Vial firmware for $KEYBOARD:$KEYMAP"

# vial-qmkリポジトリをクローン
git clone --depth 1 https://github.com/vial-kb/vial-qmk.git
cd vial-qmk

# 環境セットアップ
qmk setup -y

# ファームウェアをビルド
qmk compile -kb "$KEYBOARD" -km "$KEYMAP"

# 成果物をコピー
mkdir -p /github/workspace/output
cp *.hex *.uf2 /github/workspace/output 2>/dev/null || true

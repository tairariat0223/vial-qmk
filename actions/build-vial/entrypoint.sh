#!/bin/bash
set -e

# 引数
KEYBOARD=$1
KEYMAP=$2

if [ -z "$KEYBOARD" ] || [ -z "$KEYMAP" ]; then
  echo "Usage: $0 <keyboard> <keymap>"
  exit 1
fi

echo "🔧 Building Vial firmware for $KEYBOARD:$KEYMAP"

# vial-qmk のクローン（すでに存在すればスキップ）
if [ ! -d "]()

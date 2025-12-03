# Dockerfile: Vial/QMK build environment with Python 3.10
FROM ubuntu:22.04

# 非対話モードで apt を使用
ENV DEBIAN_FRONTEND=noninteractive
ENV QMK_HOME=/github/workspace/vial-qmk
ENV UV_PYTHON=3.10

# 必要なツール・Python・クロスコンパイラをインストール
RUN apt-get update && apt-get install -y \
    git \
    curl \
    python3.10 \
    python3.10-venv \
    python3-pip \
    unzip \
    make \
    gcc \
    gcc-avr \
    binutils-avr \
    gcc-arm-none-eabi \
    binutils-arm-none-eabi \
    dfu-util \
    dfu-programmer \
    && apt-get clean \
    && rm -rf /var/lib/apt/lists/*

# 作業ディレクトリ
WORKDIR /github/workspace

# entrypoint.sh をコピーして実行権限付与
COPY entrypoint.sh /entrypoint.sh
RUN chmod +x /entrypoint.sh

# QMK Python 依存パッケージをインストール
# （Python venv を作成し、pip をアップグレードしてから qmk dependencies をインストール）
RUN python3.10 -m venv /opt/qmk-venv \
    && /opt/qmk-venv/bin/python -m pip install --upgrade pip \
    && /opt/qmk-venv/bin/pip install qmk

# PATH に追加して qmk コマンドが使えるようにする
ENV PATH="/opt/qmk-venv/bin:$PATH"

# ENTRYPOINT
ENTRYPOINT ["/entrypoint.sh"]

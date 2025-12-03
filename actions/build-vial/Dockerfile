# ベースイメージ
FROM ubuntu:22.04

# 環境変数
ENV DEBIAN_FRONTEND=noninteractive
ENV QMK_HOME=/github/workspace/vial-qmk
ENV UV_PYTHON=3.10

# 基本ツールと Python 3.10、クロスコンパイラをインストール
RUN apt-get update && apt-get install -y \
    git \
    curl \
    python3.10 \
    python3.10-venv \
    python3-pip \
    unzip \
    make \
    gcc \
    avr-gcc \
    binutils-avr \
    gcc-arm-none-eabi \
    binutils-arm-none-eabi \
    dfu-util \
    dfu-programmer \
    && apt-get clean \
    && rm -rf /var/lib/apt/lists/*

# 作業ディレクトリ
WORKDIR /github/workspace

# entrypoint.sh をコピーして実行権限
COPY entrypoint.sh /entrypoint.sh
RUN chmod +x /entrypoint.sh

ENTRYPOINT ["/entrypoint.sh"]

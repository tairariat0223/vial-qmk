FROM ubuntu:24.04

# 基本ツールと Python3.12、クロスコンパイラをインストール
RUN apt-get update && apt-get install -y \
    git \
    curl \
    python3.12 \
    python3.12-venv \
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

# 作業用ディレクトリ
WORKDIR /github/workspace

# entrypoint をコピーして実行権限
COPY entrypoint.sh /entrypoint.sh
RUN chmod +x /entrypoint.sh
ENTRYPOINT ["/entrypoint.sh"]

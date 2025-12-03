FROM ubuntu:22.04

# 基本ツールとクロスコンパイラ
RUN apt-get update && DEBIAN_FRONTEND=noninteractive apt-get install -y \
    git \
    curl \
    python3 \
    python3-venv \
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
    
# 作業用ディレクトリ
WORKDIR /github/workspace

# entrypoint をコピーして実行権限
COPY entrypoint.sh /entrypoint.sh
RUN chmod +x /entrypoint.sh
ENTRYPOINT ["/entrypoint.sh"]

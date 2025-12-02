FROM debian:stable-slim

# 基本ツール
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
    arm-none-eabi-gcc \
    dfu-util \
    dfu-programmer \
    && apt-get clean \
    && rm -rf /var/lib/apt/lists/*

# Python3.12 を python コマンドに設定
RUN update-alternatives --install /usr/bin/python3 python3 /usr/bin/python3.12 1

# entrypoint
COPY entrypoint.sh /entrypoint.sh
RUN chmod +x /entrypoint.sh
ENTRYPOINT ["/entrypoint.sh"]

FROM ubuntu:22.04

# 基本ツール
RUN apt-get update && apt-get install -y \
    git \
    python3.10 \
    python3.10-venv \
    python3-pip \
    make \
    gcc \
    unzip \
    dfu-util \
    dfu-programmer \
    && apt-get clean \
    && rm -rf /var/lib/apt/lists/*

# qmk CLI インストール
RUN pip install --upgrade pip setuptools wheel
RUN pip install qmk

WORKDIR /github/workspace

COPY entrypoint.sh /entrypoint.sh
RUN chmod +x /entrypoint.sh

ENTRYPOINT ["/entrypoint.sh"]

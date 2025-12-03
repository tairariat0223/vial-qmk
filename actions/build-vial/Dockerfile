FROM ubuntu:22.04

ENV DEBIAN_FRONTEND=noninteractive
ENV QMK_HOME=/github/workspace/vial-qmk
ENV UV_PYTHON=3.10

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

WORKDIR /github/workspace
COPY entrypoint.sh /entrypoint.sh
RUN chmod +x /entrypoint.sh

ENTRYPOINT ["/entrypoint.sh"]

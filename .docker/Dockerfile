FROM ubuntu:22.04

ENV DEBIAN_FRONTEND=noninteractive

RUN apt-get update && apt-get install -y --no-install-recommends \
        python3 python3-pip \
        ninja-build \
        curl unzip ca-certificates \
        git \
    && rm -rf /var/lib/apt/lists/*

ARG DSD_VERSION=v0.10.2
ARG OBJDIFF_VERSION=v2.7.1
ARG WIBO_VERSION=0.6.16

RUN curl -fsSL "https://github.com/AetiasHax/dsd/releases/download/${DSD_VERSION}/dsd-linux-x86_64" \
        -o /usr/local/bin/dsd \
    && chmod +x /usr/local/bin/dsd

RUN curl -fsSL "https://github.com/encounter/objdiff/releases/download/${OBJDIFF_VERSION}/objdiff-cli-linux-x86_64" \
        -o /usr/local/bin/objdiff-cli \
    && chmod +x /usr/local/bin/objdiff-cli

RUN curl -fsSL "https://github.com/decompals/wibo/releases/download/${WIBO_VERSION}/wibo" \
        -o /usr/local/bin/wibo \
    && chmod +x /usr/local/bin/wibo

COPY mwccarm /mwccarm
COPY extract /extract

RUN pip install --no-cache-dir pre-commit pyperclip requests

FROM docker.1ms.run/ubuntu:24.04

RUN echo "Updating ubuntu registry..."

RUN echo "Installing dependencies..."

RUN apt-get update && \
    apt-get install gcc g++ gdb cmake -y

RUN echo "Dependencies Info..."

RUN gcc --version

RUN g++ --version

RUN gdb --version

RUN cmake --version

RUN cat /proc/version
# Start with Ubuntu
FROM ubuntu:latest as clang-cmaker

# Update package lists
RUN DEBIAN_FRONTEND=noninteractive apt-get update -qq

# Install CMake and Clang
RUN DEBIAN_FRONTEND=noninteractive apt-get install -y --no-install-recommends \
    clang \
    cmake

# Install misc. tools
RUN DEBIAN_FRONTEND=noninteractive apt-get install -y --no-install-recommends \
    git \
    make

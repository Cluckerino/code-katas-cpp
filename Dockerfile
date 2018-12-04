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

# Start from completed clang+cmake
FROM clang-cmaker as google-tester

# Grab gtest & gmock
RUN DEBIAN_FRONTEND=noninteractive apt-get install -y --no-install-recommends \
    libgtest-dev \
    google-mock

# Build & install gtest
RUN cd /usr/src/googletest \
    && cmake . \
    && make install

# build & install gmock
RUN cd /usr/src/googletest/googlemock \
    && cmake . \
    && make install

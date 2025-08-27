#!/usr/bin/env bash
set -euo pipefail
clear

CXX=g++
CXXFLAGS="-std=c++20 -Wall -Wextra -Werror -O2"
TARGET="BankSystem"
BUILD_DIR="build"

SRC_FILES=$(find backend frontend -name "*.cpp")
SRC_FILES="$SRC_FILES main.cpp"

mkdir -p "$BUILD_DIR"

echo "[INFO] Compiling..."
if $CXX $CXXFLAGS $SRC_FILES -o "$TARGET"; then
    echo "✅ Build successful. Run it with: $TARGET"
else
    echo -e "\033[1;31;41m❌ Build failed\033[0m"
fi

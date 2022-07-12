#!/bin/bash
python3 $(pwd)/../generator/tvlgen.py -o $(pwd)/../lib -c $(pwd)/../generator/config -d $(pwd)/../generator/primitive_data --targets neon

if [ -z "$CXX" ]; then
  CXX="g++"
fi

COMPILER_FLAGS="-Wall -Wextra -Wno-ignored-attributes -Wno-unused-parameter -pedantic -save-temps -I$(pwd)/../lib -std=c++17"

mkdir -p build
cd build

echo "Building Neon Test"
$CXX $COMPILER_FLAGS -o neonTest -ftree-vectorize -O3 -mabi=lp64 -march=armv8.2-a+lse -DNEON ../tests_arm_neon.cpp

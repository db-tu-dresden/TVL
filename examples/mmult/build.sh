#!/bin/bash

if [ -z "$CXX" ]; then
  CXX="g++"
fi

# COMPILER_FLAGS="-Wall -Wextra -Wno-ignored-attributes -Wno-unused-parameter -pedantic -save-temps -I../../lib"
COMPILER_FLAGS="-Wall -Wextra -Wno-ignored-attributes -Wno-unused-parameter -pedantic -I../../lib"

mkdir -p build
cd build

echo -e "\n\nBuilding microbench version"
$CXX $COMPILER_FLAGS -o mmult_wo_autovec -O3 -fno-tree-vectorize -msse -msse2 -msse3 -mssse3 -msse4 -msse4a -msse4.1 -msse4.2 -mavx -mavx2 ../microbenchmark.cpp
$CXX $COMPILER_FLAGS -o mmult_w_autovec -O3 -ftree-vectorize -msse -msse2 -msse3 -mssse3 -msse4 -msse4a -msse4.1 -msse4.2 -mavx -mavx2 ../microbenchmark.cpp

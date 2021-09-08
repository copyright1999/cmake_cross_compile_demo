#!/bin/bash
if [ -e build ]; then
    echo "cd build"
else
    mkdir build
fi


pushd build
rm -rf ./*
cmake -DCMAKE_TOOLCHAIN_FILE=../armlinux.cmake ..
make
popd


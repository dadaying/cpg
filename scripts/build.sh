#!/usr/bin/env bash

set -e

build_dir="build"

if [ -d $build_dir ]; then
    echo "exist build_dir=${build_dir}, remove it."
    rm -r ${build_dir}
fi

mkdir ${build_dir}

cd ${build_dir}

cmake -DCMAKE_BUILD_TYPE=Debug \
      -DCMAKE_INSTALL_PREFIX=output \
      ..

make -j${nproj}

make install
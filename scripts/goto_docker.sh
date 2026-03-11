#!/usr/bin/env bash

set -e

pwd_dir=$PWD

docker run -it \
           -v ${pwd_dir}:${pwd_dir} \
           -w ${pwd_dir} \
           --network host \
           --name cpg_container cpg_image
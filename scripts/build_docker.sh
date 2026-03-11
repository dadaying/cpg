#!/usr/bin/env bash

set -e

docker build --progress=plain -t cpg_image .

echo "Build Docker Finsh"

docker images -a
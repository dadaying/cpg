#!/usr/bin/env bash

set -e

cd build/output/

echo "pwd=$pwd"

clear && export LD_LIBRARY_PATH=${LD_LIBRARY_PATH}:./lib/ && ./bin/cpg
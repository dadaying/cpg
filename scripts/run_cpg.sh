#!/usr/bin/env bash

set -e

clear && export LD_LIBRARY_PATH=${LD_LIBRARY_PATH}:./lib/ && gdb ./bin/cpg
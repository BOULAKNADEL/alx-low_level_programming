#!/bin/bash
wget -P /tmp https://github.com/BOULAKNADEL/alx-low_level_programming/raw/main/0x18-dynamic_libraries/mizu.so
export LD_PRELOAD=/tmp/mizu.so

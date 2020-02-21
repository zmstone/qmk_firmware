#!/bin/bash

set -euo pipefail

IMG=qmkfm/base_container
docker run -it -w /qmk_firmware --rm -v $(pwd):/qmk_firmware $IMG sh -c 'make handwired/dactyl_promicro:default; bash'

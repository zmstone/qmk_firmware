#!/bin/bash

set -euo pipefail

IMG=qmkfm/base_container
docker run -it -w /qmk_firmware --rm -v $(pwd):/qmk_firmware $IMG sh -c 'make handwired/dactyl_promicro:default'
echo "done, execute below command to flash"
echo "sudo avrdude -p atmega32u4 -P /dev/tty.usbmodem* -c avr109 -U flash:w:.build/handwired_dactyl_promicro_default.hex"

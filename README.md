
# 🌡️ Arduino Temperature Control Library

[![Arduino CI](https://github.com/milesburton/Arduino-Temperature-Control-Library/workflows/Arduino%20CI/badge.svg)](https://github.com/marketplace/actions/arduino_ci)
[![Arduino-lint](https://github.com/milesburton/Arduino-Temperature-Control-Library/actions/workflows/arduino-lint.yml/badge.svg)](https://github.com/RobTillaart/AS5600/actions/workflows/arduino-lint.yml)
[![JSON check](https://github.com/milesburton/Arduino-Temperature-Control-Library/actions/workflows/jsoncheck.yml/badge.svg)](https://github.com/RobTillaart/AS5600/actions/workflows/jsoncheck.yml)
[![License: MIT](https://img.shields.io/badge/license-MIT-green.svg)](https://github.com/milesburton/Arduino-Temperature-Control-Library/blob/master/LICENSE)
[![GitHub release](https://img.shields.io/github/release/milesburton/Arduino-Temperature-Control-Library.svg?maxAge=3600)](https://github.com/milesburton/Arduino-Temperature-Control-Library/releases)

This is a fork of
[DallasTemperature](https://github.com/milesburton/Arduino-Temperature-Control-Library)
library with [OneWireNg](https://github.com/pstolarz/OneWireNg) as a 1-wire
service. `OneWireNg` branch of the fork contains the ported library version.

The fork preserves upstream library sources with no modification. Only library side
files (library descriptors, build scripts) are updated to point into OneWireNg as
a 1-wire service library.

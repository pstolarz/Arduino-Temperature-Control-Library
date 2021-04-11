# Arduino Library for Maxim Temperature Integrated Circuits

This is a fork of
[DallasTemperature](https://github.com/milesburton/Arduino-Temperature-Control-Library)
library with [OneWireNg](https://github.com/pstolarz/OneWireNg) as a 1-wire
service. `OneWireNg` branch of the fork contains the ported library version.

The fork preserves upstream library sources with no modification. Only library
descriptor files (`library.properties` and `library.json`) are updated to point
into OneWireNg as a 1-wire service library.

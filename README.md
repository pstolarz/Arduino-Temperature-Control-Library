# Arduino Library for Maxim Temperature Integrated Circuits

This is a fork of [DallasTemperature](https://github.com/milesburton/Arduino-Temperature-Control-Library)
library with [OneWireNg](https://github.com/pstolarz/OneWireNg) as a 1-wire
service.

OneWireNg vs [OneWire](https://github.com/PaulStoffregen/OneWire) usage is
controlled by `ONEWIRE_NG` macro-define. If it is set to non-zero value (default
configuration provided in [`DallasTemperature.h`](DallasTemperature.h) header) -
OneWireNg is used.

## Upstream library modifications

Modifications of the upstream library are confined to minimum. The wrapper class
[`OneWireNg_Wrapper`](OneWireNg_Wrapper.h) is a bridge between OneWire and
OneWireNg APIs for the purpose of the DallasTemperature library.

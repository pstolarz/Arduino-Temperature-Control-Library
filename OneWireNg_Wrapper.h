#ifndef OneWireNg_Wrapper_h
#define OneWireNg_Wrapper_h

#include <stdint.h>
#include <string.h>  // memcpy
#include "OneWireNg_CurrentPlatform.h"

/**
 * OneWireNg wrapper mimics OneWire interface for the purpose of
 * DallasTemperature library.
 */
class OneWireNg_Wrapper
{
public:
    OneWireNg_Wrapper(unsigned pin, bool pullUp = false):
        _srch_done(false), _ow(pin, pullUp) {}

    uint8_t reset(void) {
        return (uint8_t)(_ow.reset() == OneWireNg::EC_SUCCESS);
    }

    void skip(void) {
        _ow.writeByte(OneWireNg::CMD_SKIP_ROM);
    }

    void select(const uint8_t rom[8]) {
        _ow.writeByte(OneWireNg::CMD_MATCH_ROM);
        _ow.writeBytes(&rom[0], 8);
    }

    void reset_search() {
        _srch_done = false;
        _ow.searchReset();
    }

    bool search(uint8_t *newAddr, bool search_mode = true) {
        OneWireNg::Id id;

        if (!_srch_done) {
            OneWireNg::ErrorCode ec = _ow.search(id, !search_mode);
            memcpy(newAddr, &id[0], sizeof(id));

            _srch_done = (ec == OneWireNg::EC_DONE);
            return (ec == OneWireNg::EC_MORE || _srch_done);
        }
        return false;
    }

    uint8_t read(void) {
        return _ow.readByte();
    }

    uint8_t read_bit(void) {
        return (uint8_t)_ow.readBit();
    }

    void write(uint8_t v, uint8_t power = 0) {
        _ow.writeByte(v);
        if (power) {
            // power the bus until next 1-wire activity
            _ow.powerBus(true);
        }
    }

    void write_bit(uint8_t v) {
        _ow.writeBit(v);
    }

    uint8_t crc8(const uint8_t *addr, uint8_t len) {
        return _ow.crc8(addr, len);
    }

private:
    bool _srch_done;
    OneWireNg_CurrentPlatform _ow;
};

typedef OneWireNg_Wrapper OneWire;

#endif  /* OneWireNg_Wrapper_h */

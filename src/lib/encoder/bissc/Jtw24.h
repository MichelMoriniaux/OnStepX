// JTW 24 BIT BISS-C encoders
#pragma once

#include "Bissc.h"

#ifdef HAS_JTW_24BIT

  class Jtw24 : public Bissc {
    public:
      // initialize Bissc encoder
      Jtw24(int16_t maPin, int16_t sloPin, int16_t axis);

    private:
      // read encoder position
      bool readEnc(uint32_t &position);

      // BiSS-C 6-bit CRC of 50 bit data (24 multi-turn + 24 position + 2 err/wrn)
      uint8_t crc6(uint64_t data);

      // BiSS-C 6-bit CRC table (x^6 + x^1 + 1)
      uint8_t CRC6[64] = {
        0x00, 0x03, 0x06, 0x05, 0x0C, 0x0F, 0x0A, 0x09,
        0x18, 0x1B, 0x1E, 0x1D, 0x14, 0x17, 0x12, 0x11,
        0x30, 0x33, 0x36, 0x35, 0x3C, 0x3F, 0x3A, 0x39,
        0x28, 0x2B, 0x2E, 0x2D, 0x24, 0x27, 0x22, 0x21,
        0x23, 0x20, 0x25, 0x26, 0x2F, 0x2C, 0x29, 0x2A,
        0x3B, 0x38, 0x3D, 0x3E, 0x37, 0x34, 0x31, 0x32,
        0x13, 0x10, 0x15, 0x16, 0x1F, 0x1C, 0x19, 0x1A,
        0x0B, 0x08, 0x0D, 0x0E, 0x07, 0x04, 0x01, 0x02};
  };

#endif

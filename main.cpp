#include <iostream>

// IEEE 754 float: 1-8-23
// IEEE 754 half:  1-5-10

// Decode:
// if exponent is all ones and mantissa 0, then infinity
// if exponent is all ones and mantissa non 0, then NaN
// if exponent is 0, then the exponent is -<bias> and 0.<bits(exponent)>
// if exponent is non 0, then exponent is <exponent>-<bias>
// if sign bit set, then negate the value

struct Float {
  bool sign;
  uint32_t exponent;
  uint32_t mantissa;
  Float(float value) {
    uint32_t bits = static_cast<uint32_t>(value);
    sign = (bits >> 31) & 0x1;
    exponent = (bits >> 23) & 0xFF;
    mantissa = bits & ((1 << 23) - 1);
  }
  Float(bool sign, uint32_t exponent, uint32_t mantissa) :
      sign(sign), exponent(exponent), mantissa(mantissa) {}
};

Float add(Float a, Float b) {
  return Float(0, 0, 0);
}

Float mul(Float a, Float b) {
  return Float(0, 0, 0);
}

Float div(Float a, Float b) {
  return Float(0, 0, 0);
}

int floatToInt(Float a) {
  return 0;
}

void printFloat(Float a) {
}

int main(int argc, char *argv[]) {
  std::cout << "Hello!\n";
  return 0;
}

#include <stdio.h>

// Structure to represent floating point number
struct FloatingPoint {
  int sign;
  int exponent;
  float mantissa;
};

// Function for floating point multiplication
struct FloatingPoint multiplyFloatingPoint(struct FloatingPoint a,
                                           struct FloatingPoint b) {

  struct FloatingPoint result;

  // Multiply mantissas
  result.mantissa = a.mantissa * b.mantissa;

  // Add exponents
  result.exponent = a.exponent + b.exponent;

  // Determine sign
  result.sign = a.sign ^ b.sign;

  // Normalize result
  while (result.mantissa >= 2.0) {
    result.mantissa /= 2.0;
    result.exponent++;
  }

  return result;
}

int main() {

  struct FloatingPoint num1 = {0, 3, 1.5};
  struct FloatingPoint num2 = {1, 2, 1.25};
  struct FloatingPoint result = multiplyFloatingPoint(num1, num2);

  printf("Result: %c%.2f * 2^%d\n", (result.sign == 1) ? '-' : '+',
         result.mantissa, result.exponent);

  return 0;
}
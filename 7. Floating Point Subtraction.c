#include <stdio.h>

// Structure to represent floating point number
struct FloatingPoint {
  int sign;
  int exponent;
  float mantissa;
};

// Function for floating point subtraction
struct FloatingPoint subtractFloatingPoint(struct FloatingPoint a,
                                           struct FloatingPoint b) {

  struct FloatingPoint result;

  // Calculate exponent difference
  int exponentDiff = a.exponent - b.exponent;

  // Align mantissas
  if (exponentDiff > 0) {
    b.mantissa /= 2.0;
  } else if (exponentDiff < 0) {
    a.mantissa /= 2.0;
  }

  // Subtract mantissas
  result.mantissa = a.mantissa - b.mantissa;

  // Normalize result
  while (result.mantissa < 1.0 && result.mantissa != 0.0) {

    result.mantissa *= 2.0;
    a.exponent--;
  }

  // Store final values
  result.sign = a.sign;
  result.exponent = a.exponent;

  return result;
}

int main() {

  struct FloatingPoint num1 = {0, 130, 9.75};
  struct FloatingPoint num2 = {1, 126, 0.5625};
  struct FloatingPoint result = subtractFloatingPoint(num1, num2);

  printf("Result: %c%.2f * 2^%d\n", (result.sign == 1) ? '-' : '+',
         result.mantissa, result.exponent);

  return 0;
}
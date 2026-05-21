#include <stdio.h>

// Structure to represent floating point number
struct FloatingPoint {
  int sign;
  int exponent;
  float mantissa;
};

// Function for floating point addition
struct FloatingPoint addFloatingPoint(struct FloatingPoint a,
                                      struct FloatingPoint b) {
  struct FloatingPoint result;

  // Check signs
  if (a.sign != b.sign) {
    result.sign = 0;
    result.exponent = 0;
    result.mantissa = 0.0;

    return result;
  }

  // Find larger exponent
  int largerExponent = (a.exponent > b.exponent) ? a.exponent : b.exponent;

  // Adjust mantissas
  if (a.exponent != b.exponent) {

    if (a.exponent < b.exponent) {
      a.mantissa /= 2.0;
    } else {
      b.mantissa /= 2.0;
    }
  }

  // Add mantissas
  result.mantissa = a.mantissa + b.mantissa;
  // Normalize result
  while (result.mantissa >= 2.0) {
    result.mantissa /= 2.0;
    largerExponent++;
  }

  // Store result
  result.sign = a.sign;
  result.exponent = largerExponent;

  return result;
}

int main() {

  struct FloatingPoint num1 = {0, 3, 1.1};
  struct FloatingPoint num2 = {0, 0, 50.0};
  struct FloatingPoint result = addFloatingPoint(num1, num2);

  printf("Result: %c%.2f * 10^%d\n", (result.sign == 1) ? '-' : '+',
         result.mantissa, result.exponent);

  return 0;
}
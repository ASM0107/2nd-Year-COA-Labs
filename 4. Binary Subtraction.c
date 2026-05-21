#include <stdio.h>

// Function to perform binary subtraction
int binarySubtraction(int a, int b) {

  int borrow = 0, result = 0, bitPosition = 1;

  while (a != 0 || b != 0) {

    int bitA = a % 10;
    int bitB = b % 10;

    // Apply previous borrow
    bitA = bitA - borrow;

    int diff;

    // If subtraction becomes negative
    if (bitA < bitB) {
      diff = bitA + 2 - bitB;
      borrow = 1;
    } else {
      diff = bitA - bitB;
      borrow = 0;
    }

    result = result + (diff * bitPosition);

    // Move to next bit
    a = a / 10;
    b = b / 10;

    bitPosition = bitPosition * 10;
  }

  return result;
}

int main() {

  int num1, num2, result;

  printf("Enter first binary number: ");
  scanf("%d", &num1);

  printf("Enter second binary number: ");
  scanf("%d", &num2);

  result = binarySubtraction(num1, num2);

  printf("Result of binary subtraction = %d\n", result);

  return 0;
}
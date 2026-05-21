# 2nd-Year-COA-Labs

## 1. One's Complement
One's complement is obtained by reversing all bits of a binary number.

### Algorithm
1. Start
2. Input an 8-bit binary number
3. Traverse each bit of the binary number
4. Replace 1 with 0 and 0 with 1
5. Store the result in another array
6. Print the one's complement
7. Stop

**Time Complexity:** $O(n)$ where $n$ is the number of bits.
**Space Complexity:** $O(n)$ to store the complemented string.

## 2. Two's Complement
Two's complement is obtained by finding the one's complement of a binary number and adding 1 to the least significant bit.

### Algorithm
1. Start
2. Input an 8-bit binary number
3. Find the one's complement by reversing all bits.
4. Add 1 to the one's complement starting from the least significant bit.
5. If the sum is 2, set the bit to 0 and carry 1 to the next bit.
6. Continue until all bits are processed or the carry becomes 0.
7. Print the two's complement.
8. Stop

**Time Complexity:** $O(n)$ where $n$ is the number of bits.
**Space Complexity:** $O(n)$ to store the complemented strings.

## 3. Binary Addition
Adds two binary numbers by simulating bit-by-bit addition with carry.

### Algorithm
1. Start
2. Input two binary numbers as integers.
3. Extract the least significant bits using modulo 10.
4. Add the extracted bits along with the previous carry.
5. Store the sum modulo 2 in the result array and update the carry by dividing the sum by 2.
6. Remove the processed bits by dividing the numbers by 10.
7. Repeat steps 3-6 until both numbers are 0.
8. If a carry remains, append it to the result array.
9. Print the result array in reverse order.
10. Stop

**Time Complexity:** $O(n)$ where $n$ is the maximum number of digits in the binary numbers.
**Space Complexity:** $O(n)$ to store the bits in an array.

## 4. Binary Subtraction
Subtracts two binary numbers using bit-by-bit subtraction with borrow.

### Algorithm
1. Start
2. Input two binary numbers as integers.
3. Extract the least significant bits using modulo 10.
4. Subtract the previous borrow from the first bit.
5. If the first bit is smaller than the second bit, add 2 to the first bit, set the new borrow to 1, and subtract.
6. Otherwise, perform subtraction and set the new borrow to 0.
7. Multiply the bit difference by its place value and add to the final result.
8. Remove the processed bits by dividing the numbers by 10.
9. Repeat steps 3-8 until both numbers are 0.
10. Print the final result.
11. Stop

**Time Complexity:** $O(n)$ where $n$ is the maximum number of digits in the binary numbers.
**Space Complexity:** $O(1)$ auxiliary space.

## 5. Binary Multiplication
Multiplies two binary numbers using shift and add method.

### Algorithm
1. Start
2. Input two binary numbers as integers.
3. Extract the least significant bit of the multiplier using modulo 10.
4. If the bit is 1, add the multiplicand to the accumulated product using binary addition.
5. Shift the multiplicand left by multiplying it by 10.
6. Remove the processed bit of the multiplier by dividing it by 10.
7. Repeat steps 3-6 until the multiplier is 0.
8. Print the final product.
9. Stop

**Time Complexity:** $O(n \times m)$ where $n$ and $m$ are the lengths of the multiplicand and multiplier.
**Space Complexity:** $O(k)$ for the binary addition array, where $k$ is the maximum length of the addition result.

## 6. Floating Point Addition
Adds two floating-point numbers represented with a sign, exponent, and mantissa.

### Algorithm
1. Start
2. Input two floating-point numbers.
3. If the signs differ, the operation would be subtraction.
4. Find the difference between the exponents.
5. Align the mantissa of the number with the smaller exponent by dividing it by 2 for each difference in exponent.
6. Add the aligned mantissas.
7. Normalize the result: if the mantissa is $\ge 2.0$, divide it by 2 and increment the exponent.
8. Print the resulting sign, mantissa, and exponent.
9. Stop

**Time Complexity:** $O(1)$ (constant time operations on structured types).
**Space Complexity:** $O(1)$ auxiliary space.

## 7. Floating Point Subtraction
Subtracts two floating-point numbers represented with a sign, exponent, and mantissa.

### Algorithm
1. Start
2. Input two floating-point numbers.
3. Calculate the difference in their exponents.
4. Align the mantissa of the number with the smaller exponent by dividing it by 2 for each difference in exponent.
5. Subtract the smaller mantissa from the larger one.
6. Normalize the result: while the mantissa is $< 1.0$ and not $0.0$, multiply it by 2 and decrement the exponent.
7. Print the resulting sign, mantissa, and exponent.
8. Stop

**Time Complexity:** $O(1)$ (constant time operations on structured types).
**Space Complexity:** $O(1)$ auxiliary space.

## 8. Floating Point Multiplication
Multiplies two floating-point numbers represented with a sign, exponent, and mantissa.

### Algorithm
1. Start
2. Input two floating-point numbers.
3. Multiply their mantissas.
4. Add their exponents.
5. Determine the resulting sign by taking the XOR of the two signs (if signs are different, result is negative).
6. Normalize the result: if the mantissa is $\ge 2.0$, divide it by 2 and increment the exponent.
7. Print the resulting sign, mantissa, and exponent.
8. Stop

**Time Complexity:** $O(1)$ (constant time operations on structured types).
**Space Complexity:** $O(1)$ auxiliary space.

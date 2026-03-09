/*
Program: Reverse a Number
Description: Reverses the digits of a given number.
Author: Poojashree

Example:
Input: 1234
Output: 4321
*/

#include <stdio.h>

int main() {

    int num, reversed = 0, remainder;

    printf("Enter a number: ");
    scanf("%d", &num);

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }

    printf("Reversed number: %d\n", reversed);

    return 0;
}

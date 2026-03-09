/*
Program: Armstrong Number Checker
Description: Checks whether a given number is an Armstrong number.
Author: Poojashree

Example:
Input: 153
Output: Armstrong number
*/

#include <stdio.h>

int main() {

    int num, original, remainder;
    int result = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Calculate sum of cubes of digits
    while (num != 0) {
        remainder = num % 10;
        result = result + (remainder * remainder * remainder);
        num = num / 10;
    }

    // Compare result with original number
    if (result == original) {
        printf("Armstrong number\n");
    } else {
        printf("Not an Armstrong number\n");
    }

    return 0;
}

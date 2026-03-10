/*
Program: Sum of Digits
Description: Calculates the sum of digits of a given number.
Author: Poojashree

Example:
Input: 1234
Output: 10
*/

#include <stdio.h>

int main() {

    int num, remainder, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        remainder = num % 10;
        sum = sum + remainder;
        num = num / 10;
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}

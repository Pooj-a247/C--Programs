/*
Program: Prime Number Checker
Description: Checks whether a given number is a prime number.
Author: Poojashree

Example:
Input: 7
Output: Prime number
*/

#include <stdio.h>

int main() {

    int num, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0;
    }

    // Check divisibility
    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
    }

    // Print result
    if (isPrime == 1) {
        printf("Prime number\n");
    } else {
        printf("Not a prime number\n");
    }

    return 0;
}

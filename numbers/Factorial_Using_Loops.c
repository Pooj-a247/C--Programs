/*
Program: Factorial Using Loop
Description: Calculates the factorial of a given number.
Author: Poojashree

Example:
Input: 5
Output: 120
*/

#include <stdio.h>

int main() {

    int num, i;
    long long factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = 1; i <= num; i++) {
        factorial = factorial * i;
    }

    printf("Factorial = %lld\n", factorial);

    return 0;
}

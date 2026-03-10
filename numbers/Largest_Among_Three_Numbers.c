/*
Program: Largest Among Three Numbers
Description: Finds the largest number among three input numbers.
Author: Poojashree

Example:
Input: 10 25 15
Output: 25 is the largest number
*/

#include <stdio.h>

int main() {

    int a, b, c;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) {
        printf("%d is the largest number\n", a);
    }
    else if (b >= a && b >= c) {
        printf("%d is the largest number\n", b);
    }
    else {
        printf("%d is the largest number\n", c);
    }

    return 0;
}

/*
Program: Fibonacci Series
Description: Prints Fibonacci series up to n terms.
Author: Poojashree

Example:
Input: 6
Output: 0 1 1 2 3 5
*/

#include <stdio.h>

int main() {

    int n, first = 0, second = 1, next, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series: ");

    for (i = 0; i < n; i++) {
        printf("%d ", first);

        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");

    return 0;
}

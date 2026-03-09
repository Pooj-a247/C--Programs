/*
Program: Number Palindrome Checker
Description: Checks whether a given number is a palindrome.
Author: Poojashree

Example:
Input: 121
Output: Palindrome number
*/

#include <stdio.h>

int main() {

    int num, original, reversed = 0, remainder;

    // Ask the user to enter a number
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reversed = reversed * 10 + remainder;
        num = num / 10;
    }

    // Compare original and reversed numbers
    if (original == reversed) {
        printf("Palindrome number\n");
    } else {
        printf("Not a palindrome number\n");
    }

    return 0;
}

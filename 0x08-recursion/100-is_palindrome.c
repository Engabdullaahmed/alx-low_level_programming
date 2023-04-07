#include "main.h"
#include <stdio.h>

/**
 * is_palindrome - sheck if palindrom
 * @s: string
 * Return: 0 or 1
 */

int is_palindrome(char *s, int start, int end) {
    if (start >= end) {
        return 1;
    }
    if (s[start] != s[end]) {
        return 0;
    }
    return is_palindrome(s, start+1, end-1);
}

#include "main.h"

/**
 * last_index - return last index of string
 * @s: pointer of string
 * Return: int
*/
int is_palindrome(char *s);
int check(char *s, int start, int end, int modul);
int last_index(char *s)
{

int n = 0;
if (*s > '\0')
n += last_index(s + 1) + 1;

return (n);
}

/**
 * last_index - return the last index of string
 * @s: pointer of string
 * Return: int
 */
int is_palindrome(char *s);
int check(char *s, int start, int end, int modul);
int last_index(char *s)
{
int n = 0;
if (*s > '\0')
n += last_index(s + 1) + 1;
return (n);
}

/**
 * is_palindrom - check if a string is a palindrom
 * @s: string to check
 * Return: 0 or 1
 */

int is_palindrom(char *s)
{
int end = last_index(s);

return (check(s, 0, end - 1, end % 2));
}

/**
 * check - checker the palindrom
 * @s: string
 * @start: mv from right to left
 * @end: mv from left to right
 * @modul: int
 * Return: 0 or 1
 */

int check(char *s, int start, int end, int modul)
{

if ((start == end && modul != 0) || (start == end + 1 && modul == 0))
return (1);
else if (s[start] != s[end])
return (0);
else
return (check(s, start + 1, end - 1, modul));
}

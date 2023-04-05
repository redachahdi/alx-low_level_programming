#include "main.h"
/**
 * recur_str - that returns the length of the string.
 * @s: is the string
 * Return: is the length of a string.
 */
int recur_str(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + recur_str(s + 1));
}
/**
 * balance - that compares each character of the string.
 * @s: is the string
 * @a: is the small iterator.
 * @b: is the big iterator.
 * Return: no return
 */
int balance(char *s, int a, int b)
{
	if (*(s + a) == *(s + b))
	{
		if (a == b || a == b + 1)
			return (1);
		return (0 + balance(s, a + 1, b - 1));
	}
	return (0);
}
/**
 * is_palindrome - that detects if a string is the palindrome.
 * @s: is the string.
 * Return: 1 if s is the palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	return (balance(s, 0, recur_str(s) - 1));
}

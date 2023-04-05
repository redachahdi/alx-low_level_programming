#include "main.h"

/**
 * wildcmp -  that compares two strings.
 * @s1: is the fisrt string .
 * @s2: is the second string. can include * like special character.
 * Check if s1 matches any substring of s2 after the first
 * Return: 1 if the strings match, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || (*s1 != '\0' && wildcmp(s1 + 1, s2)));
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}


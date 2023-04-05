#include "main.h"

/**
 * wildcmp -  that compares two strings.
 * @s1: is the fisrt string .
 * @s2: is the second string. can include * like special character.
 * While s2 has consecutive * characters, increment s2
 * Check if s1 matches any substring of s2 after the first
 * Return: 1 if the strings match, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		while (*(s2 + 1) == '*')
			s2++;
		if (*(s2 + 1) == '\0')
			return (1);
		while (*s1 != '\0')
		{
			if (wildcmp(s1, s2 + 1) == 1)
				return (1);
			s1++;
		}
	}
	else if (*s1 != '\0' && (*s1 == *s2))
		return (wildcmp(s1 + 1, s2 + 1));
	else if (*s1 == '\0' && *s2 != '*')
		return (0);
	return (0);
}

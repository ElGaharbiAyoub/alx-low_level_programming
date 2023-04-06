#include "main.h"
/**
 * check_lent - gets length of string
 * @s: pointer to a string
 * Return: return length of string
 */
int check_lent(char *s)
{
	if (*s != '\0')
		return (1 + check_lent(s + 1));
	return (0);
}

/**
 * check - gets length of string
 * @s: pointer to a string
 * @count: length of a string
 * @lent: length of a string
 * Return: return 0 if its not palindrome return 1 if it is
 */
int check(char *s, int count, int lent)
{
	if (*(s + count) == *(s + (lent - 1) - count))
	{
		if (count < lent / 2)
			return (check(s, count + 1, lent));
		else
			return (1);
	}
	return (0);
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: pointer to a string
 * Return: return 0 if its not palindrome return 1 if it is
 */
int is_palindrome(char *s)
{
	return (check(s, 0, check_lent(s)));
}


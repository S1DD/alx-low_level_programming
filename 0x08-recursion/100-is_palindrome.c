#include "main.h"

int findLen(char *s);
int check_palindrome(char *s, int len, int idx);
int is_palindrome(char *s);

/**
 * findLen - Returns the length of a string
 * @s: The string to be measured
 *
 * Return: The length of the string.
 */
int findLen(char *s)
{
	int len = 0;

	if (*(s + len))
	{
		len++;
		len += findLen(s + len);
	}

	return (len);
}

/**
 * check_palindrome - Checks if a string is a palindrome.
 * @s: The string to be checked
 * @len: The length of s.
 * @idx: Index of th string to be checked
 *
 * Return: If the string is a palindrome - 1.
 * If the string is not a palindrome - 0.
 */
int check_palindrome(char *s, int len, int idx)
{
	if (s[idx] == s[idx / 2])
		return (1);

	if (s[idx] == s[len - idx - 1])
		return (check_palindrome(s, len, idx + 1));
	return (0);
}

/**
 * is_palindrome - Check if a string is a palindrome.
 * @s: The string to be checked.
 *
 * Return: If the string is a palindrome - 1.
 * If the string is not a palindrome - 0.
 */
int is_palindrome(char *s)
{
	int idx = 0;
	int len = findLen(s);

	if (!(*s))
		return (1);

	if (s[idx] == s[len - idx - 1])
		return (check_palindrome(s, len, idx + 1));

	return (0);
}

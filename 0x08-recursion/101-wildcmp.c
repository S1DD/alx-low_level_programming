#include "main.h"

int strlen_without_wildcards(char *str);
void advance_past_wildcards(char **wildstr);
char *match_postfix(char *str, char *postfix);

/**
 * string_length_without_wildcards - Returns the length of a string,
 *                                   ignoring wildcard characters.
 * @str: The string to be measured.
 *
 * Return: The length of the string without wildcards.
 */
int string_length_without_wildcards(char *str)
{
	int length = 0, index = 0;

	if (*(str + index))
	{
		if (*str != '*')
			length++;

		index++;
		length += string_length_without_wildcards(str + index);
	}

	return (length);
}

/**
 * advance_past_wildcards - Advances the pointer past wildcard characters.
 * @wildstr: Pointer to the string to be iterated through.
 */
void advance_past_wildcards(char **wildstr)
{
	if (**wildstr == '*')
	{
		(*wildstr)++;
		advance_past_wildcards(wildstr);
	}
}

/**
 * match_postfix - Checks if a string matches the postfix of another string
 * possibly containing wildcards.
 * @str: The string to be matched.
 * @postfix: The postfix to match against.
 *
 * Return: If str and postfix are identical - a pointer to the null byte
 * located at the end of postfix.
 * Otherwise - a pointer to the first unmatched character in postfix.
 */
char *match_postfix(char *str, char *postfix)
{
	int str_length = string_length_without_wildcards(str) - 1;
	int postfix_length = string_length_without_wildcards(postfix) - 1;

	if (*postfix == '*')
		advance_past_wildcards(&postfix);

	if (*(str + str_length - postfix_length) == *postfix && *postfix != '\0')
	{
		postfix++;
		return (match_postfix(str, postfix));
	}

	return (postfix);
}

/**
 * wildcmp - Compares two strings, considering wildcard characters.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared - may contain wildcards.
 *
 * Return: If the strings can be considered identical - 1.
 *         Otherwise - 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		advance_past_wildcards(&s2);
		s2 = match_postfix(s1, s2);
	}

	if (*s2 == '\0')
		return (1);

	if (*s1 != *s2)
		return (0);

	return (wildcmp(++s1, ++s2));
}

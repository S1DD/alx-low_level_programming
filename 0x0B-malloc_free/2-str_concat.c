#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * Return: A pointer with contents of s1 and s2, null terminated
 */
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 1, k = 0, l = 0;
	char *s3;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[i])
		i++;

	while (s2[j])
		j++;

	l = i + j;
	s3 = malloc((sizeof(char) * l) + 1);

	if (s3 == NULL)
		return (NULL);

	j = 0;

	while (k < l)
	{
		if (k <= i)
			s3[k] = s1[k];

		if (k >= i)
			s3[k] = s2[j];
			j++;

		k++;
	}

	s3[k] =  '\0';
	return (s3);
}

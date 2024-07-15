#include "main.h"
#include <stdlib.h>

int get_word_len(char *str);
int count_words_in_string(char *str);
char **strtow(char *str);

/**
 * get_word_len - Locates the index marking the end of the
 *                   first word contained within a string.
 * @str: The string to be searched.
 *
 * Return: The index marking the end of the initial word pointed to by str.
 */
int get_word_len(char *str)
{
	int index = 0, length = 0;

	while (*(str + index) && *(str + index) != ' ')
	{
		length++;
		index++;
	}

	return (length);
}
/**
 * count_words_in_string - Counts the number of words in a string.
 * @str: The string to be searched.
 *
 * Return: The number of words contained within str.
 */
int count_words_in_string(char *str)
{
	int idx = 0, words = 0, length = 0;

	for (idx = 0; *(str + idx); idx++)
		length++;

	for (idx = 0; idx < length; idx++)
	{
		if (*(str + idx) != ' ')
		{
			words++;
			idx += get_word_len(str + idx);
		}

	}

	return (words);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to be split.
 *
 * Return: If str = NULL, str = "", or the function fails - NULL.
 *         Otherwise - a pointer to an array of strings (words).
 */
char **strtow(char *str)
{
	char **words_array;
	int index = 0, words_count, w, letters_count, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	words_count = count_words_in_string(str);
	if (words_count == 0)
		return (NULL);

	words_array = malloc(sizeof(char *) * (words_count + 1));
	if (words_array == NULL)
		return (NULL);

	for (w = 0; w < words_count; w++)
	{
		while (str[index] == ' ')
			index++;

		letters_count = get_word_len(str + index);
		words_array[w] = malloc(sizeof(char) * (letters_count + 1));

		if (words_array[w] == NULL)
		{
			for (; w >= 0; w--)
				free(words_array[w]);

			free(words_array);
			return (NULL);
		}

		for (l = 0; l < letters_count; l++)
			words_array[w][l] = str[index++];

		words_array[w][l] = '\0';
	}

	words_array[w] = NULL;
	return (words_array);
}

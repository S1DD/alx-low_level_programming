#include "main.h"

/**
 * _strlen - Counts the characters in a string
 * @str: The string to be processed
 * Return: The length of a string
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int w_fd, rwr;

	if (filename == NULL)
		return (-1);
	w_fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (w_fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		rwr = write(w_fd, text_content, _strlen(text_content));
		if (rwr == -1)
		{
			close(w_fd);
			return (-1);
		}
		close(w_fd);
		return (1);
	}
	else
	{
		close(w_fd);
		return (1);
	}
}

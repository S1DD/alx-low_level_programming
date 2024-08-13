#include "main.h"

/**
 * _strlen - counts the characters in a string
 * @str: The string to be processed
 * Return: length of a string
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
		len++;
	return (len);
}

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, rwr;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		rwr = write(fd, text_content, _strlen(text_content));
		if (rwr == -1)
		{
			close(fd);
			return (-1);
		}
		close(fd);
		return (1);
	}
	else
	{
		close(fd);
		return (1);
	}
}

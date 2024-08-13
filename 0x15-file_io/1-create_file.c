#include "main.h"

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
	int w_fd, int nletters = 0, int rwr;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (nletters = 0; text_content[nletters];)
			nletters++;
	}

	w_fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	rwr = write(w_fd, text_content, nletters);

	if (w_fd == -1 || rwr == -1)
		return (-1);

	close(w_fd);

	return (1);
}

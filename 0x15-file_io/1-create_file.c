#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file_s;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	file_s = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_s == -1)
		return (-1);
	if (!text_content)
		text_content = " ";
	for (nletters = 0; text_content[nletters] ; nletters++)
		;
	rwr = write(file_s, text_content, nletters);
	if (rwr == -1)
		return (-1);
	close(file_s);
	return (1);
}

#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content: NULL terminated string to add to the end of the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_s;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);
	if (text_content != NULL)

	file_s = open(filename, O_WRONLY | O_APPEND);

	if (file_s == -1)
		return (-1);
	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;
		rwr = write(file_s, text_content, nletters);
		if (rwr == -1)
			return (-1);
	}
		close(file_s);
		return (1);
}

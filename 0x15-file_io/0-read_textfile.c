#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to thePOSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: if NULL, 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_s;
	ssize_t lenr, lenw;
	char *buffer;

	if (filename == NULL)
		return (0);
	file_s = open(filename, O_RDONLY);

	if (file_s == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		close(file_s);
		return (0);
	}

	lenr = read(file_s, buffer, letters);
	close(file_s);

	if (lenr == -1)
	{
		free(buffer);
		return (0);
	}

	lenw = write(STDOUT_FILENO, buffer, lenr);
	free(buffer);
	if (lenr != lenw)
		return (0);
	return (lenw);
}

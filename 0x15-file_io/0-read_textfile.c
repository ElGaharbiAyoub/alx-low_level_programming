#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX
 * @filename: file to read
 * @letters: number of letters read and printed
 * Return:  number of letters it could read and print or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int openf;
	size_t readf, wrtf;

	if (filename == NULL || !letters)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);

	openf = open(filename, O_RDONLY);
	if (openf == -1)
	{
		free(buffer);
		return (0);
	}

	readf = read(openf, buffer, letters);
	if (readf < 1)
	{
		free(buffer);
		close(openf);
		return (0);
	}

	wrtf = write(STDIN_FILENO, buffer, readf);

	free(buffer);
	close(openf);

	if (!wrtf || wrtf != readf)
		return (0);

	return (readf);
}

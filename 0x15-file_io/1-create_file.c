#include "main.h"

/**
 * create_file - creates a file or truncates it
 * @filename: the name of the file to create
 * @text_content: NULL terminated string to write to file
 * Return: 1 on succes, -1 on failue
 */

int create_file(const char *filename, char *text_content)
{
	int ofile, lent = 0, wrtf = 0;

	if (!filename)
		return (-1);

	ofile = open(filename, O_RDWR | O_TRUNC | O_CREAT, 0600);
	if (ofile == -1)
		return (-1);

	if (text_content)
	{
		for (lent = 0; text_content[lent]; lent++)
			;
		wrtf = write(ofile, text_content, lent);
	}
	close(ofile);
	if (wrtf != lent)
		return (-1);

	return (1);
}


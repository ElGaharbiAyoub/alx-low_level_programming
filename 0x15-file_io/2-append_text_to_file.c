#include "main.h"

/**
 * append_text_to_file - append to a file
 * @filename: the name of the file
 * @text_content: NULL terminated string to write to end of the file
 * Return: 1 on succes, -1 on failue
 */
int append_text_to_file(const char *filename, char *text_content)
{

	int file, len;

	if (!filename)
		return (-1);

	file = open(filename, O_RDWR | O_APPEND);

	if (file == -1)
		return (-1);

	if (text_content)
	{
		for (len = 0; text_content[len]; len++)
			;
		write(file, text_content, len);
	}
	close(file);
	return (1);
}

#include "main.h"

/**
 * copy_content_file - copies one file to the other (cp function)
 * @file1: opened filename1 (file to copy)
 * @file2: opened filename2 (new copy)
 * @filename1: name of file1
 * @filename2: name of file2
 */

void copy_content_file(int file1, int file2, char *filename1, char *filename2)
{
	ssize_t lenRead = 1, lenWrite = 1;
	char buffer[1024];

	while (lenRead)
	{
		lenRead = read(file1, buffer, sizeof(buffer));
		if (lenRead == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename1);
			close(file1);
			close(file2);
			exit(98);
		}
		if (!lenRead)
			break;
		lenWrite = write(file2, buffer, lenRead);
		if (lenWrite == -1 || lenWrite != lenRead)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename2);
			close(file1);
			close(file2);
			exit(99);
		}
	}
}

/**
 * main - copy a file into another file (cp command)
 * @ac: number of arguments
 * @av: arguments
 * Return: 0 if succesfull
 */

int main(int ac, char **av)
{
	int file1, file2;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file1 = open(av[1], O_RDONLY);
	if (file1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	file2 = open(av[2], O_CREAT | O_EXCL | O_WRONLY, 0664);
	if (file2 == -1)
		file2 = open(av[2], O_TRUNC | O_WRONLY);

	if (file2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		close(file1);
		exit(99);
	}

	copy_content_file(file1, file2, av[1], av[2]);

	if (close(file1) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file1);
		close(file2);
		exit(100);
	}
	if (close(file2) < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file2);
		exit(100);
	}
	return (0);

}


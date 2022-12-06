#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the standard output
 * @filename: name of the file to be read
 * @letters: number of letters to read and print
 *
 * Return: the number of letters printed, or 0 if it failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int ac, x, y;
	char *ptr;

	if (!filename)
		return (0);

	ac = open(filename, O_RDONLY);
	if (ac < 0)
		return (0);

	ptr = malloc(sizeof(char) * letters);
	if (!ptr)
		return (0);

	x = read(ac, ptr, letters);
	if (x < 0)
	{
		free(ptr);
		return (0);
	}
	ptr[x] = '\0';

	close(ac);

	y = write(STDOUT_FILENO, ptr, x);
	if (y < 0)
	{
		free(ptr);
		return (0);
	}

	free(ptr);
	return (y);
}

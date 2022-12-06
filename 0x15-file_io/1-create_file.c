#include "main.h"

/**
 * create_file - creates a file and fills it with text
 * @filename: name of the file to create
 * @text_content: text to write in the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int ac, y, x = 0;

	if (!filename)
		return (-1);

	ac = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (ac < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[x])
			x++;
		y = write(ac, text_content, x);
		if (y != x)
			return (-1);
	}
	close(ac);
	return (1);
}

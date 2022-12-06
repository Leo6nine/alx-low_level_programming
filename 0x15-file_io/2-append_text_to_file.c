#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file to append the text to
 * @text_content: content to append into the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int ac, y, x = 0;

	if (!filename)
		return (-1);

	ac = open(filename, O_WRONLY | O_APPEND);
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

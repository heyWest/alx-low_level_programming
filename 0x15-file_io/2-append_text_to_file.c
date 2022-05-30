#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of file
 * @filename: filename
 * @text_content: text content
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, acc, i;

	if (!filename)
		return (-1);
	f = open(filename, O_APPEND | O_RDWR, 0664);
	if (f == -1)
		return (-1);
	if (text_content)
	{
		for (i = 0; text_content[i]; i++)
			;
		acc = write(f, text_content, i);
		if (acc == -1)
			return (-1);
	}
	close(acc);
	return (1);
}

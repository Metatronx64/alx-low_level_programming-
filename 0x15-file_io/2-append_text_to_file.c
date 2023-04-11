#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file to append the text to
 * @text_content: content to append into the file
 *
 * Return: 1  and -1 on 
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, a, b = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (f < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[b])
			b++;
		a = write(f, text_content, b);
		if (a != b)
			return (-1);
	}

	close(f);

	return (1);
}

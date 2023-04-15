#include "main.h"
/**
 * append_text_to_file - Appends an str to the end of a file.
 *
 * @filename:  name of  file to append the text to.
 * @text_content: The str to append onto the file.
 *
 * Return: 1 if on success, - 1 if on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}


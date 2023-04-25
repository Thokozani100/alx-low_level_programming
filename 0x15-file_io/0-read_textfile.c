#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads an text file and prints the content to STDOUT
 *
 * @filename: name of an file being read
 * @letters: an amount of letters to be read and printed
 *
 * Return:the actual numbers of letters read and printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}



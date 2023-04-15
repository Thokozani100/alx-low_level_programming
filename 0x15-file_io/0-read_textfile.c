#include "main.h"
#include <stdlib.h>

/**
 * read_text-  read an text file  and than print out its content to STDOUT
 *
 * @filename:name of file being read
 * @letters :the amount of letters to be print and read
 *
 * return:actual number of letters to read and printed
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



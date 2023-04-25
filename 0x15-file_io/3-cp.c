#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - make 1024 bytes for  buffer.
 * @file: The name of the file buffer its storing the chars.
 *
 * Return: an pointer to  newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - Closes  files descriptor.
 * @fd: target file descriptor to be closed.
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - its Copies  contents of a file to another file.
 * @argc: The num of arguments supplied to the program.
 * @argv: A array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description:
 *  - If a argument count is incorrect, exit code 97.
 *  - If file_from does is not exising or cannot be read, exit code 98.
 *  - If file_to cannot be created or written to or exit code 99.
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer;

	/* Check the num of arguments */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	/* Allocate buffer */
	buffer = create_buffer(argv[2]);

	/* Open the file to copy from */
	from = open(argv[1], O_RDONLY);

	/* Reads up to 1024 bytes from file into buffer */
	r = read(from, buffer, 1024);

	/* Opens file to copy to (create if it doesn't exist) */
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	/* Keeps reading from file and writing to new file until nothing is left */
	do {
		/* Checks for errors reading from file */
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		/* Writes data from the buffer to new file */
		w = write(to, buffer, r);

		/* Checks for the errors writing to new file */
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		/* Reads up to 1024 bytes from files into buffer */
		r = read(from, buffer, 1024);

		/* Open files to copy to in appends mode */
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	/* Frees the buffer and close both files */
	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}


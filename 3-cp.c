#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "main.h"

/**
 * error_handler - Prints an error message to standard error.
 * @msg: The error message to print.
 */
void error_handler(char *msg)
{
    dprintf(STDERR_FILENO, "Error: %s\n", msg);
}

/**
 * cp - Copies the content of a file to another file.
 * @file_from: The source file.
 * @file_to: The destination file.
 * Return: 0 on success, exit code on failure.
 */
int main(int argc, char **argv)
{
    int file_from, file_to, bytes_read, bytes_written;
    char buffer[1024];

    if (argc != 3)
    {
        error_handler("Usage: cp file_from file_to");
        exit(97);
    }

    file_from = open(argv[1], O_RDONLY);
    if (file_from == -1)
    {
        error_handler("Can't read from file");
        exit(98);
    }

    file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (file_to == -1)
    {
        error_handler("Can't write to file");
        close(file_from);
        exit(99);
    }

    do
    {
        bytes_read = read(file_from, buffer, sizeof(buffer));
        if (bytes_read == -1)
        {
            error_handler("Can't read from file");
            close(file_from);
            close(file_to);
            exit(98);
        }

        bytes_written = write(file_to, buffer, bytes_read);
        if (bytes_written == -1 || bytes_written != bytes_read)
        {
            error_handler("Can't write to file");
            close(file_from);
            close(file_to);
            exit(99);
        }

    } while (bytes_read == sizeof(buffer));

    if (close(file_from) == -1 || close(file_to) == -1)
    {
        error_handler("Can't close file descriptor");
        exit(100);
    }

    return (0);
}

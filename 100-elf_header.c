#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * error_handler - Prints an error message to standard error.
 * @msg: The error message to print.
 */
void error_handler(char *msg)
{
    dprintf(STDERR_FILENO, "%s\n", msg);
}

/**
 * main - Displays information contained in the ELF header of a file.
 * @argc: The number of command-line arguments.
 * @argv: An array of command-line argument strings.
 * Return: 0 on success, exit code on failure.
 */
int main(int argc, char **argv)
{
    int file_descriptor, bytes_read;
    char buffer[32];

    if (argc != 2)
    {
       






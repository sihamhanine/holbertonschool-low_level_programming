#include "main.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>
#include <stdlib.h>
#include <errno.h>
#include <string.h>


/**
 * error_and_exit - Function that verify
 * condition and get error and exit number
 * @code: the code to exit
 * @meassge: error message
 *
 * Return: no thing
 */
void error_and_exit(int code, const char *message)
{
dprintf(STDERR_FILENO, "%s\n", message);
exit(code);
}
/**
 * main - copy file_from to file_to
 *
 * @argc: number of argument
 * @argv: la chaine d'argument
 *
 * Return : always 0;
 */
int main(int argc, char **argv)
{
int file_from, file_to;
char buf[1024];
ssize_t bytes_readed;
ssize_t bytes_written;
if (argc != 3)
{
error_and_exit(97, "Usage: cp file_from file_to");
}
file_from = open(argv[1], O_RDONLY);
if (file_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
if (file_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
while ((bytes_readed = read(file_from, buf, 1024)) > 0)
{
bytes_written = write(file_to, buf, bytes_readed);
if (bytes_written == -1 || bytes_written != bytes_readed)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}
if (bytes_readed == -1)
{
error_and_exit(98, "Error while reading from file");
}
if (close(file_from) == -1 || close(file_to) == -1)
{
error_and_exit(100, "Error: Can't close file descriptor");
}
return 0;
} 

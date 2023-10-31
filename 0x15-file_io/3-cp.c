#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

int openSourceFile(const char *filename);
int openDestinationFile(const char *filename);
ssize_t copyFile(int from_fd, int to_fd);

/**
 * main - Entry point of the program.
 * @ac: The number of arguments.
 * @av: An array of arguments.
 *
 * Return: 0 on success, other values on failure.
 */

int main(int ac, char **av)
{
	int from_fd, to_fd, result;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		return (97);
	}

	from_fd = openSourceFile(av[1]);
	if (from_fd == -1)
		return (98);

	to_fd = openDestinationFile(av[2]);
	if (to_fd == -1)
		return (99);

	result = copyFile(from_fd, to_fd);

	if (close(from_fd) == -1 || close(to_fd) == -1)
	{
		dprintf(2, "Error: Can't close file descriptor\n");
		return (100);
	}

	if (result == -1)
	{
		dprintf(2, "Error: File copy failed\n");
		return (99);
	}

	return (0);
}

/**
 * openSourceFile - Open the source file and return the file descriptor.
 * @filename: The name of the source file.
 *
 * Return: The file descriptor on success, -1 on failure.
 */

int openSourceFile(const char *filename)
{
	int from_fd = open(filename, O_RDONLY);

	if (from_fd == -1)
		dprintf(2, "Error: Can't read from %s\n", filename);

	return (from_fd);
}

/**
 * openDestinationFile - Open the destination file and return the file desc
 * @filename: The name of the destination file.
 *
 * Return: The file descriptor on success, -1 on failure.
 */

int openDestinationFile(const char *filename)
{
	int to_fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (to_fd == -1)
		dprintf(2, "Error: Can't write to %s\n", filename);

	return (to_fd);
}

/**
 * copyFile - Copy the contents of one file to another.
 * @from_fd: The source file descriptor.
 * @to_fd: The destination file descriptor.
 *
 * Return: The number of bytes copied on success, -1 on failure.
 */

ssize_t copyFile(int from_fd, int to_fd)
{
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read, bytes_written;

	while ((bytes_read = read(from_fd, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(to_fd, buffer, bytes_read);
		if (bytes_written != bytes_read)
			return (-1);
	}

	return (bytes_read);
}

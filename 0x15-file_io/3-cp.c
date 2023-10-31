#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUFFER_SIZE 1024

/**
 * main - Copy the contents of one file to another
 * @ac: The number of arguments
 * @av: An array of arguments
 *
 * Return: 0 on success, other values on failure
 */
int main(int ac, char **av)
{
	int f, t, n;
	char buffer[BUFFER_SIZE];

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}
	f = open(av[1], O_RDONLY);
	if (f == -1)
	{
		dprintf(2, "Error: Can't read from %s\n", av[1]);
		exit(98);
	}
	t = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (t == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while ((n = read(f, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(t, buffer, n) != n)
		{
			dprintf(2, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	if (n == -1)
	{
		dprintf(2, "Error: Can't read from %s\n", av[1]);
		exit(98);
	}
	if (close(f) == -1 || close(t) == -1)
	{
		dprintf(2, "Error: Can't close file descriptor\n");
		exit(100);
	}
	return (0);
}


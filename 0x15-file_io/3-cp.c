#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "holberton.h"
#include <sys/types.h>
#include <sys/stat.h>

/**
 *copy-copy
 *Return:void
 *@src:source file
 *@dest:destination file
 *@str:string of contents
 *@av:arguments aka filenames
 */
void copy(int src, int dest, char *str, char **av)
{
	int closeSrc, closeDest, check, bytesRead, total = 0;

	while (1)
	{
		bytesRead = read(src, str, 1024);
		if (bytesRead == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			exit(98);
		}
		if (bytesRead == 0)
			break;
		total += bytesRead;

		if (total % 1024 == 0 && bytesRead != 0)
			check = write(dest, str, bytesRead);
		if (total % 1024 != 0)
			check = write(dest, str, (total % 1024));
		if (check == -1)
		{
			closeSrc = close(src);
			if (closeSrc == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src);
				exit(100);
			}
			closeDest = close(dest);
			if (closeDest == -1)
			{
				dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest);
				exit(100);
			}
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
}

/**
 *main-main
 *Return:0
 *@ac:number of args
 *@av:value of args
 */
int main(int ac, char **av)
{
	int src, dest, closeSrc, closeDest;
	char *str;

	str = malloc(1024 * sizeof(char));
	if (str == NULL)
		return (-1);

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	src = open(av[1], O_RDONLY);
	if (src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	dest = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}

	copy(src, dest, str, av);
	closeSrc = close(src);
	if (closeSrc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", src);
		exit(100);
	}
	closeDest = close(dest);
	if (closeDest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest);
		exit(100);
	}
	free(str);
	return (0);
}

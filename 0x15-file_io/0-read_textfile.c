#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <sys/types.h>
#include <sys/stat.h>
#include "holberton.h"

/**
 *read_textfile-read
 *Return: number of letters read/print
 *@filename:name
 *@letters:number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file, charsPrinted = 0, charsRead = 0;
	char *str;

	file = open(filename, O_RDONLY);
	if (file == -1)
		return (0);

	str = malloc(sizeof(char) * letters);
	if (str == NULL)
	{
		close(file);
		return (0);
	}

	charsRead = read(file, str, letters);
	if (charsRead == -1)
	{
		close(file);
		free(str);
		return (0);
	}

	str[charsRead] = '\0';
	charsPrinted = write(STDOUT_FILENO, str, charsRead);
	if (charsPrinted == -1 || charsPrinted != charsRead)
	{
		close(file);
		free(str);
		return (0);
	}

	close(file);
	free(str);
	return (charsPrinted);
}

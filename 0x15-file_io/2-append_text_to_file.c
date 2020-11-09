#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "holberton.h"
#include <sys/types.h>
#include <sys/stat.h>

/**
 *append_text_to_file-append
 *Return:1/-1
 *@filename:name
 *@text_content:content
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file, charsWritten, length = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_APPEND | O_WRONLY);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
			length++;

		charsWritten = write(file, text_content, length);
		if (charsWritten == -1)
			return (-1);
	}
	close(file);
	return (1);
}

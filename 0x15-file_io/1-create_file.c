#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 *create_file-makes a file
 *Return:1/-1
 *@filename:name of file
 *@text_content: contents
 */
int create_file(const char *filename, char *text_content)
{
	int file, charsWritten, length = 0;

	if (filename == NULL)
		return (-1);

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length] != '\0')
			length++;

		charsWritten = write(file, text_content, len);
		if (charsWritten == -1)
			return (-1);
	}
	close(file);
	return (1);
}

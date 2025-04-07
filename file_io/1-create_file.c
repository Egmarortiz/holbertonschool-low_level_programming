#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * create_file - creates a file with the specified text content.
 * @filename: name of the file to create.
 * @text_content: NULL-terminated string to write to the file.
 *
 * Return: 1 on success, or -1 on failure (file cannot be created,
 *         written, or if filename is NULL).
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w;
	ssize_t len;

	if (filename == NULL)
		return (-1);

	/* Open file: create if not exists, truncate if exists, write-only mode.
	   Set permissions to rw------- (0600). */
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		len = strlen(text_content);
		w = write(fd, text_content, len);
		if (w == -1 || (ssize_t)w != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}


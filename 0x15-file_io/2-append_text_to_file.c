#include "main.h"

/**
 * append_text_to_file -  function that appends text at the end of a file
 * @filename: file name
 * @text_content: NULL terminator string at the end of line
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int rwr;
	int nletters;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;
		rwr = write(fd, text_content, nletters);
		if (rwr == -1)
		return (-1);
	}
	close(fd);
	return (1);
}

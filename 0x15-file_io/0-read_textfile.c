#include "main.h"

/**
 * read_textfile - funct tht reads text file n prnts to e POSIX standard output
 * @letters: num of letters it shd print
 * @filename: file name
 * Return: num of letter printed, otherwise 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t numrd, numwrt;
	char *buff;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * (letters));
	if (!buff)
		return (0);
	numrd = read(fd, buff, letters);
	numwrt = write(STDOUT_FILENO, buff, numrd);
	close(fd);
	free(buff);
	return (numwrt);
}


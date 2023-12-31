#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file
 * @letters: the number of letters should print
 * Return: the actual number letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, a = 0;
	char *buf;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (!buf)
	{
		close(fd);
		free(buf);
		return (0);
	}
	a = read(fd, &buf[0], letters);
	if (a == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}
	a = write(STDOUT_FILENO, buf, a);
	if (a == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}
	close(fd);
	free(buf);
	return (a);
}

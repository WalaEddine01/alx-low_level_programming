#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file
 * @letters: the number of letters should print
 * Return: the actual number letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, n = 0, a = 0;
	char buf[1024];

	fd = open(filename, O_RDONLY);
	if (fd == -1 || filename == NULL || letters == 0)
	{
		close(fd);
		return (0);
	}
	n = read(fd, buf, letters);
	if (n == -1 || n == 0)
	{
		close(fd);
		return (0);
	}
		a = write(STDOUT_FILENO, &buf[0], n);
		if (a == -1)
		{
			close(fd);
			return (0);
		}
	close(fd);
	return (n);
}

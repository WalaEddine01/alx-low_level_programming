#include "main.h"
/**
 * main - copies the content of a file to another file
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	ssize_t fd_to, fd_from, a, b;
	char *msg = "Usage: cp file_from file_to\n";
	char *msg2 = "Error: Can't write to ";
	char *msg3 = "Error: Can't close fd ";
	char *msg4 = "Error: Can't read from file ", *buf;

	if (argc != 3)
	{
		write(2, msg, strlen(msg));
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from != -1)
	{
		fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
		if (fd_to == -1)
		{
			a = close(fd_from);
			if (a == -1)
			{
				write(2, msg3, strlen(msg2));
				printf("%li\n", fd_from);
				exit(100);
			}
			write(2, msg2, strlen(msg2));
			printf("%s\n", argv[2]);
			exit(99);
		}
		buf = malloc(sizeof(char) * 1024);
		fd_from = read(fd_from, buf, 1024);
		if (fd_from == -1)
		{
			write(2, msg4, strlen(msg4));
			printf("%s\n", argv[1]);
			free(buf);
			exit(98);
		}
		fd_to = dprintf(fd_to, buf, fd_from);
		if (fd_to == -1)
		{
			write(2, msg2, strlen(msg2));
			printf("%s\n", argv[2]);
			free(buf);
			exit(99);
		}
		a = close(fd_from);
		if (a == -1)
		{
			write(2, msg3, strlen(msg2));
			printf("%li\n", fd_from);
			free(buf);
			exit(100);
		}
		b = close(fd_to);
		if (b == -1)
		{
			write(2, msg3, strlen(msg2));
			printf("%li\n", fd_from);
			exit(100);
		}
		free(buf);
	}
	else
	{
		write(2, msg4, strlen(msg4));
		printf("%s\n", argv[1]);
		exit(98);
	}
	return (0);
}

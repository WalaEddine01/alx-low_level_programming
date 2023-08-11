#include "main.h"
/**
 * check_msg_args - check the number of args
 * @a: input number of args
 * Return: 0 if it fail
 */
int check_msg_args(int a)
{
	char *msg = "Usage: cp file_from file_to\n";

	if (a != 3)
	{
		write(STDERR_FILENO, msg, strlen(msg));
		exit(97);
	}
	return (0);
}
/**
 * check_msg2_writing - check if can not create or if write to file_to fails
 * @a: input file descriptor
 * @namefile: the name of file
 * Return: 0 if it fail
 */
int check_msg2_writing(ssize_t a, char *namefile)
{
	char *msg2 = "Error: Can't write to %s\n";

	if (a == -1)
	{
		dprintf(STDERR_FILENO, msg2, namefile);
		exit(99);
	}
	return (0);
}
/**
 * check_msg3_close - check if can not close a file descriptor
 * @a: input case
 * @fd: file descriptor
 * @buf: the memory should free
 * Return: 0 if it fail
 */
int check_msg3_close(ssize_t a, ssize_t fd, char *buf)
{
	char *msg3 = "Error: Can't close fd %li\n";

	if (a == -1)
	{
		dprintf(STDERR_FILENO, msg3, fd);
		free(buf);
		exit(100);
	}
	return (fd);
}
/**
 * check_msg4_read_exist - check if filedoes not exist, or can not read it
 * @a: input file descriptor
 * @namefile: the name of file
 * Return: 0 if it fail
 */
int check_msg4_read_exist(ssize_t a, char *namefile)
{
	char *msg4 = "Error: Can't read from file %s\n";

	if (a == -1)
	{
		dprintf(STDERR_FILENO, msg4, namefile);
		exit(98);
	}
	return (0);
}
/**
 * main - copies the content of a file to another file
 * @argc: the number of args
 * @argv: the string args
 *
 * Return: 0
 */
int main(int argc, char **argv)
{
	ssize_t fd_to, fd_from, a, b;
	char *buf;

	check_msg_args(argc);
	fd_from = open(argv[1], O_RDONLY);
	if (fd_from != -1)
	{
		fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
		if (fd_to != -1)
		{
			buf = malloc(sizeof(char) * 1024);
			if (buf != 0)
			{
				a = read(fd_from, buf, 1023);
				while (a != 0)
				{
					check_msg4_read_exist(a, argv[1]);
					b = write(fd_to, buf, a);
					check_msg2_writing(b, argv[2]);
					a = read(fd_from, buf, 1024);
				}
				free(buf);
				b = close(fd_to);
				check_msg3_close(b, fd_to, buf);
			}
		}
		else
			check_msg2_writing(fd_to, argv[2]);
		a = close(fd_from);
		check_msg3_close(a, fd_from, buf);
	}
	else
		check_msg4_read_exist(fd_from, argv[1]);
	return (0);
}

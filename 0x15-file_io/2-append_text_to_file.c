#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the name of the file
 * @text_content: the string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fd;

	fd = open(filename, O_RDONLY);
	if (fd != -1)
	{
		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
		{
			close(fd);
			return (-1);
		}
		if (!text_content)
		{
			close(fd);
			return (1);
		}
		fd = write(fd, text_content, strlen(text_content));
		if (fd == -1)
		{
			close(fd);
			return (-1);
		}
		close(fd);
		return (1);
	}
	return (-1);
}

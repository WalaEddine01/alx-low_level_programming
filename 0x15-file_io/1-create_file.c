#include "main.h"
/**
 * create_file - creates a file
 * @filename: the name of the new file
 * @text_content: the content should write in the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t a = 0;

	if (!filename)
		return (-1);
	a = open(filename, O_WRONLY | O_TRUNC, 0600);
	if (a == -1)
	{
		a = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
		if (a == -1)
			return (-1);
	}
	if (!text_content)
	{
		close(a);
		return (-1);
	}
	a = write(a, text_content, strlen(text_content));
	if (a == -1)
	{
		close(a);
		return (-1);
	}
	close(a);
	return (1);
}

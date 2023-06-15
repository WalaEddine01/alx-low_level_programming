#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: print a qoute using write fun
 * wirite (int fd , const,size_t)
 *
 * Return: 1 (not success)
 */
int main(void)
{
	char qu[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, qu, 59);
	return (1);
}

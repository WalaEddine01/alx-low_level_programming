#include "main.h"
/**
 * argstostr - concatenate all arguments of the program
 * @ac: argument count
 * @av: argument vecter
 * Return: it return a pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int i, j, k, len;
	char *str;

	i = 0;
	j = 0;
	k = 0;
	len = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != 0; j++)
		{
			len++;
		}
		len++;
	}
	str = malloc(sizeof(char) * (len + 1));
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != 0; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	return (str);
}

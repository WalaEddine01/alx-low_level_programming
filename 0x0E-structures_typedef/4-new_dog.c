#include "dog.h"
/**
 * _strlen - returns the length of a string
 * @s: pointer at the first charechter of a string
 * Return: the number of charecters @a
 */
int _strlen(char *s)
{
	int i, a;

	a = 0;
	i = 0;
	while (s[i] != 0)
	{
		a++;
		i++;
	}
	return (a);
}
/**
 * *_strcpy - copies the string to another
 * @dest: output
 * @src: input
 * Return: string @dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != 0)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = 0;
	return (dest);
}
/**
 * new_dog - creates a new dog
 * @name: the name of the dog
 * @age: age of dog
 * @owner: name of owner o dog
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (name == 0 || age <= 0 || owner == 0)
		return (0);
	d = malloc(sizeof(dog_t));
	if (d == 0)
		return (0);
	d->name = malloc(_strlen(name) + 1);
	d->owner = malloc(_strlen(owner) + 1);
	if (d->name == 0 || d->owner == 0)
	{
		free(d->name);
		free(d->owner);
		free(d);
		return (0);
	}
	_strcpy(d->name, name);
	_strcpy(d->owner, owner);
	d->age = age;
	return (d);
}

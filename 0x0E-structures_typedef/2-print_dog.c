#include "dog.h"
#include <stdio.h>
/**
 * print_dog - prints a struct dog
 * @d: pointer to a struct dog
 * Return: Nothing
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		if (d->name == 0)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		if (d->owner == 0)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}

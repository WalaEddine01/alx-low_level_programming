#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog struct
 * @name: dog's name
 * @age: dog's age
 * @owner: owner's name
 * Description: dog structure
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef strcut dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif

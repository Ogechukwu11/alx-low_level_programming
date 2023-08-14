#include "dog.h"
/**
 * init_dog - a function that initialize a variable of type
 * @d: a pointer to struct dog
 * @name: member  variable
 * @age: member variable
 * @owner: member variable
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}

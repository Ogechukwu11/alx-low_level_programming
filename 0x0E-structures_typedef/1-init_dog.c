#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * init_dog - a function that initialize a variable of type struct dog
 * @struct dog: data type
 * @d: a pointer to struct dog
 * @name: member  variable
 * @age: member variable
 * @owner: member variable
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	(*d).name = name;
	(*d).age = age;
	(*d).owner = owner;
}

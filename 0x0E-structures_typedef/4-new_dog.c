#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - a function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: a pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i;
	int j;
	dog_t *ptr;

	ptr = malloc(sizeof(dog_t));

	if (ptr == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
		ptr[i] = name[i];
	for (j = 0; owner[j] != '\0'; j++)
		ptr[j + 1] = owner[j];
	return (ptr);
}

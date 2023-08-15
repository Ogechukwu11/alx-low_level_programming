#include "dog.h"
#include <stdlib.h>
/**
 * length_s - a function to get length of a string
 * @s: string
 *
 * Return: length
 */

int length_s(char *s)
{
	int l;

	for (l = 0; s[l] != '\0'; l++)
		l++;
	return (l);
}

/**
 * cpy_str - a function to copy a string
 * @dest: destination of the string
 * @src: source of the string
 *
 * Return: dest
 */

char *cpy_str(char *dest, char *src)
{
	int c;

	for (c = 0; src[c] != '\0'; c++)
		dest[c] = src[c];
	dest[c] = '\0';
	return (dest);
}

/**
 * new_dog - a function that creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: a pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ptr;

	if (!name || age < 0 || !owner)
		return (NULL);

	ptr = malloc(sizeof(dog_t));

	if (ptr == NULL)
		return (NULL);

	(*ptr).name = malloc(sizeof(char) * length_s(name) + 1);

	if ((*ptr).name == NULL)
	{
		free(ptr);
		return (NULL);
	}

	(*ptr).owner = malloc(sizeof(char) * length_s(owner) + 1);

	if ((*ptr).owner == NULL)
	{
		free((*ptr).name);
		free(ptr);
		return (NULL);
	}

	(*ptr).name = cpy_str((*ptr).name, name);
	(*ptr).age = age;
	(*ptr).owner = cpy_str((*ptr).owner, owner);
	return (ptr);
}

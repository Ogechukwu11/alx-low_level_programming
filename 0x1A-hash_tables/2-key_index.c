#include "hash_tables.h"
/**
 * key_index - A function that gives you the index of a key.
 * @key: The key
 * @size: Size of the key
 * Return: The index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	int i, hash;

	for (i = 0; key[i] != '\0'; i++)
	{
		hash += key[i];
	}

	return (hash % size);
}

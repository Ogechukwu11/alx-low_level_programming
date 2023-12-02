#include "hash_tables.h"
/**
 * hash_table_set - A function that adds an element to the hash table.
 * @ht: The hash table
 * @key: The key
 * @value: The value
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *key_value;

	key_value = malloc(sizeof(hash_node_t));
	if (key_value == NULL)
		return (0);

	key_value->key = strdup(key);
	key_value->value = strdup(value);
	key_value->next = NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = key_value;
	}
	else
	{
		key_value->next = ht->array[index];
		ht->array[index] = key_value;
	}
	return (1);
}

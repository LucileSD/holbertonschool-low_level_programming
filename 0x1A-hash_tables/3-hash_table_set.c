#include "hash_tables.h"
/**
 * hash_table_set -  adds an element to the hash table
 * @ht: the hash table
 * @key: the key
 * @value: the value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *tmp, *new;

	if (!key || strcmp(key, "") == 0 || !ht || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[index];

	while (tmp)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			if (tmp->value == NULL)
				return (0);
			return (1);
		}

		tmp = tmp->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}

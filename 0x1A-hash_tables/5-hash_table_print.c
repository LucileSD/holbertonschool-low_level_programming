#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: the hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index = 0;
	hash_node_t *tmp = NULL;
	char *empty = "", *comma = ", ";

	if (ht)
	{
		printf("{");
		while (index < ht->size)
		{
			tmp = ht->array[index];
			while (tmp)
			{
				printf("%s", empty);
				printf("'%s' : '%s'", tmp->key, tmp->value);
				empty = comma;
				tmp = tmp->next;
			}
			index ++;
		}
		printf("}\n");
	}
}

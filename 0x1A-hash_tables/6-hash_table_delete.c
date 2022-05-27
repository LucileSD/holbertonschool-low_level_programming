#include "hash_tables.h"
/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp, *head;
	unsigned long int index = 0;

	if (ht)
	{
		while (index < ht->size)
		{
			head = ht->array[index];
			tmp = head;
			while (head)
			{
				tmp = tmp->next;
				free(head->value);
				free(head->key);
				free(head);
				head = tmp;
			}
			index++;
		}
		free(ht->array);
		free(ht);
	}
}

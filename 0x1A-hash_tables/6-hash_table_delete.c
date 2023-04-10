#include <stdlib.h>
#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: the hash table to delete
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *curr, *tmp;

	if (!ht)
		return;

	i = 0;
	while (i < ht->size)
	{
		if (ht->array[i])
		{
			curr = ht->array[i];
			while (curr)
			{
				tmp = curr;
				curr = tmp->next;

				free(tmp->key);
				free(tmp->value);
				free(tmp);
			}
		}
		++i;
	}

	free(ht->array);
	free(ht);
}


   #include "hash_tables.h"

/**
 * hash_table_delete - deletes hash table
 * @ht: hash table
 *
 * Return: void
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *tmp;
	unsigned int i;

if (ht == NULL)
{
return;
}
	/**
	 * Go through each element of hash table.
	 * 1. Free linked list
	 * 2. Free array
	 * 3. Free hash table
	 */

for (i = 0; i < ht->size; i++)
	{
node = ht->array[i];
while (node != NULL)
		{
tmp = node->next;
free(node->key);
free(node->value);
free(node);
node = tmp;
		}
	}
	free(ht->array);
	free(ht);
}

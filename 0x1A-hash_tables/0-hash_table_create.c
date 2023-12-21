#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table.
 * @size: Array size.
 *
 * Return:  pointer to hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htb;
	unsigned long int i;

	htb = malloc(sizeof(hash_table_t));
	if (htb == NULL)
		return (NULL);

	htb->size = size;
	htb->array = malloc(sizeof(hash_node_t *) * size);
	if (htb->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		htb->array[i] = NULL;

	return (htb);
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code
 *
 * Return: Always EXIT_SUCCESS
 */
int main(void)
{
	hash_table_t *ht;

	ht = hash_table_create(1024);
	hash_table_set(ht, "hetairas", "first-value");
	hash_table_set(ht, "mentioner", "second-value");

	printf("key: %s\n",(ht->array[key_index((unsigned char *)"hetairas", 1024)])->next->key);
	printf("value: %s\n",(ht->array[key_index((unsigned char *)"hetairas", 1024)])->next->value);
	printf("key: %s\n",(ht->array[key_index((unsigned char *)"mentioner", 1024)])->key);
	printf("value: %s\n",(ht->array[key_index((unsigned char *)"mentioner", 1024)])->value);

	return (EXIT_SUCCESS);
}

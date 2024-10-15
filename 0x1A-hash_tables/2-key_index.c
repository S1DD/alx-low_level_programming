#include "hash_tables.h"

/**
 * key_index - Returns the index at which the key/value pair should
 *		be stored in the array of the hash table
 * @key: The key used to search for the index in the hash table
 * @size: Size of the hash table
 *
 * Return: The index of the key/value pair stored in the table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

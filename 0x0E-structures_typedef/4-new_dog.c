/*
 * File: 4-new_dog.c
 * Auth: Thabiso Molefe
 */

#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - Finds the length of a given string
 * @str: The string to be measured
 *
 * Return: The length of a string
 */

int _strlen(char *str)
{
	int len = 0;

	while (str[len])
		len++;

	return (len);
}

/**
 * _strcopy - Copies a string pointed to by src, including the
 *            terminating null byte, to a buffer pointed to by dest.
 * @dest: The buffer storing the string copy.
 * @src: The source string.
 *
 * Return: The pointer to dest.
 */
char *_strcopy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}

	dest[index++] = '\0';

	return (dest);
}

/**
 * new_dog - Creates a new dog
 * @name: Name of the dog
 * @age: Age of the dog
 * @owner: Owner of the dog
 *
 * Return: A dog type
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *aDog;
	int nameLen = 0, ownerLen = 0;

	if (name != NULL && owner != NULL)
	{
		nameLen = _strlen(name) + 1;
		ownerLen = _strlen(owner) + 1;
		aDog = malloc(sizeof(dog_t));

		if (aDog == NULL)
			return (NULL);

		aDog->name = malloc(sizeof(char) * nameLen);

		if (aDog->name == NULL)
		{
			free(aDog);
			return (NULL);
		}

		aDog->owner = malloc(sizeof(char) * ownerLen);

		if (aDog->owner == NULL)
		{
			free(aDog->name);
			free(aDog);
			return (NULL);
		}

		aDog->name = _strcopy(aDog->name, name);
		aDog->owner = _strcopy(aDog->owner, owner);
		aDog->age = age;
	}

	return (aDog);
}

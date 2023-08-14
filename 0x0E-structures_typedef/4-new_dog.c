#include "dog.h"
#include <stdlib.h>

int _strlen(char *s);
char *_strdup(char *src);


/**
 * _strlen - get the length of a string
 * @s: string to be calculated
 *
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}

/**
 * _strdup - Duplicates a string.
 * @src: The source string to be duplicated
 *
 * Return: A pointer to the buffer which contains a copy of the string
 *         given as a parameter,
 *         or NULL if the function fails.
 */

char *_strdup(char *src)
{
	char *dup;
	int i, len;

	if (src == NULL)
		return (NULL);

	len = _strlen(src);
	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		dup[i] = src[i];

	dup[len] = '\0';

	return (dup);
}

/**
 * new_dog - creates a new dog
 * @name: new dog's name
 * @age: new dog's age
 * @owner: new dog's owner
 *
 * Return: New struct dog and NULL if it fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggie;
	char *new_name, *new_owner;

	doggie = malloc(sizeof(dog_t));

	if (!doggie)
		return (NULL);

	new_name = _strdup(name);

	if (!new_name)
	{
		free(doggie);
		return (NULL);
	}

	new_owner = _strdup(owner);

	if (!new_owner)
	{
		free(new_name);
		free(doggie);
		return (NULL);
	}

	doggie->name = new_name;
	doggie->age = age;
	doggie->owner = new_owner;

	return (doggie);


}

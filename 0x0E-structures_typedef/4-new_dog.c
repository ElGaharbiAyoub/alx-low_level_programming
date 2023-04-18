#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - return length of a string
 * @s: string to be printed
 *
 * Return: length of s
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * new_dog - write a function that creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	char *copy_name, *copy_owner;
	int len1, len2, i;

	my_dog = malloc(sizeof(dog_t));

	if (!my_dog)
		return (NULL);
	len1 = _strlen(name);
	len2 = _strlen(owner);
	len1++, len2++;
	copy_name = malloc(len1);

	if (!copy_name)
	{
		free(my_dog);
		return (NULL);
	}
	copy_owner = malloc(len2);
	if (!copy_owner)
	{
		free(copy_name);
		free(my_dog);
		return (NULL);
	}
	for (i = 0; i < len1; i++)
		copy_name[i] = name[i];
	for (i = 0; i < len2; i++)
		copy_owner[i] = owner[i];

	my_dog->name = copy_name;
	my_dog->age = age;
	my_dog->owner = copy_owner;

	return (my_dog);
}

#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog -  function that creates a new dog.
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: Always return a pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *a;

	a = malloc(sizeof(dog_t));
	if (a == NULL)
		return (NULL);
	a->name = name;
	a->age = age;
	a->owner = owner;
	return (a);
}

#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct do
 * @d: pointer to new struct
 * @name: Name of dog
 * @age: Age of dog
 * @owner: owner of dog
 *
 * Return: no value returned
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->owner = owner;
	d->age = age;
}

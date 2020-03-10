#include <stdio.h>
#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 *@name: name of dog
 *@age: age of dog
 *@owner: owner of dog
 *@dogp: pointer to the estructure
 * Return: Void
 */

void init_dog(struct dog *dogp, char *name, float age, char *owner)
{
	if (dogp == NULL)
		return;
	dogp->name = name;
	dogp->age = age;
	dogp->owner = owner;
}

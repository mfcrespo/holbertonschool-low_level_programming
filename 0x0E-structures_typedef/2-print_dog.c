#include <stdio.h>
#include "dog.h"
/**
 *print_dog - prints a struct dog
 *@dogp: pointer to a dog structure
 *
 *Return: void
 */
void print_dog(struct dog *dogp)
{
	if (dogp == NULL)
		return;
	if (dogp->name == NULL)
		dogp("Name: (nil)\n");
	else
		printf("Name: %s\n", dogp->name);
	printf("Age: %f\n", dogd->age);
	if (dogp->owner == NULL)
		printf("Owner: (nil)\n");
	else
		printf("Owner: %s\n", d->owner);
}

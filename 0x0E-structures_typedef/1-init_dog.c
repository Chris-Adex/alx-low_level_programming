#include <stdlib.h>
#include "dog.h"

/**
  *init_dog - func that initializes a variable of type struct dog
  *@d: pointer to struct dog
  *@name: pointer to name of dog
  *@age: age of the dog
  *@owner: pointer to the owner of the dog
  *
  *Return: void (no return value)
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		{
		}

	d->name = name;
	d->age = age;
	d->owner = owner;
}

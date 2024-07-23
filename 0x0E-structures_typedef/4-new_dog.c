#include <string.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - function that creates a new dog
 * @name: pointer to name of dog
 * @age: age of new dog
 * @owner: pointer to owner of dog
 *
 * Return:NULL if fail
 */

dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *canis;

if (name == NULL || age < 0 || owner == NULL)
	return (NULL);

canis = malloc(sizeof(dog_t));
if (canis == NULL)
{
	free(canis);
	return (NULL);
}

canis->name = malloc(sizeof(char) * (strlen(name) + 1));
if (canis->name == NULL)
{
	free(canis->name);
	free(canis);
	return (NULL);
}

canis->owner = malloc(sizeof(char) * (strlen(owner) + 1));
if (canis->owner == NULL)
{
	free(canis->owner);
	free(canis->name);
	free(canis);
	return (NULL);
}

canis->name = strcpy(canis->name, name);
canis->age = age;
canis->owner = strcpy(canis->owner, owner);

return (canis);

}

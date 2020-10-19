#include <stdlib.h>
#include "dog.h"

/**
 *new_dog-dog
 *@name:name
 *@age:age
 *@owner:owner
 *Return:dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog_dog;
	char *ownerVar;
	char *nameVar;
	int i;

	dog_dog = malloc(sizeof(dog_t));
	if (dog_dog == NULL)
	{
		free(dog_dog);
		return (NULL);
	}
	ownerVar = malloc(sizeof(owner) + 1);
	if (ownerVar == NULL)
	{
		free(dog_dog);
		free(ownerVar);
		return (NULL);
	}
	for (i = 0; owner[i] != '\0'; i++)
		ownerVar[i] = owner[i];
	ownerVar[i] = '\0';
	nameVar = malloc(sizeof(name) + 1);
	if (nameVar == NULL)
	{
		free(dog_dog);
		free(ownerVar);
		free(nameVar);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
		nameVar[i] = name[i];

	nameVar[i] = '\0';
	dog_dog->name = nameVar;
	dog_dog->age = age;
	dog_dog->owner = ownerVar;

	return (dog_dog);
}

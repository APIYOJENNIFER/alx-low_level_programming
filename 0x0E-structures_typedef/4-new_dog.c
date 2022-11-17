#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - create new dog
 * @name: pointer to dog's name
 * @age: dog's age
 * @owner: pointer to dog's owner
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i, nlen = 0, olen = 0;

	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (; name[nlen]; nlen++)
		;
	nlen++;
	dog->name = malloc(nlen * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	i = 0;
	while (i < nlen)
	{
		dog->name[i] = name[i];
		i++;
	}
	dog->age = age;
	for (; owner[olen]; olen++)
		;
	olen++;
	dog->owner = malloc(olen * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (; i < olen; i++)
		dog->owner[i] = owner[i];
	return (dog);
}

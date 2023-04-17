#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - create a new dog struct by a way of a dog_t typedef
 * @name: pointer to the string with dog's name
 * @age: numbers of years in a decimal format
 * @owner: pointer to string with owners name
 * Return: pointer to a new struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog1;

	dog1 = malloc(sizeof(dog1) + sizeof(age) + sizeof(dog1));
	if (dog1 == NULL)
		return (NULL);
	
	dog1->name = name;
	dog1->age = age;
	dog1->owner = owner;

	return (dog1);
}

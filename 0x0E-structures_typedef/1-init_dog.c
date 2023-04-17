#include "dog.h"

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: A pointer
 * @name: Element 1
 * @age: Element 2
 * @owner: Element 3
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}

#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: Element 1
 * @age: Element 2
 * @owner: Element 3
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	char *newname, *newowner;
	int len1, len2, i;

	p = malloc(sizeof(dog_t));
	if (p == NULL)
		return (NULL);
	for (len1 = 0; name[len1]; len1++)
	;
	for (len2 = 0; owner[len2]; len2++)
	;
	len1++;
	len2++;
	newname = malloc(len1);
	if (!newname)
	{
		free(p);
		return (NULL);
	}
	newowner = malloc(len2);
	if (!newowner)
	{
		free(p);
		free(newname);
		return (NULL);
	}
	for (i = 0; i < len1; i++)
		newname[i] = name[i];
	for (i = 0; i < len2; i++)
		newowner[i] = owner[i];
	p->name = newname;
	p->owner = newowner;
	p->age = age;
	return (p);
}

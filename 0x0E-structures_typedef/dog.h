#ifndef DOG_H
#define DOG_H

/**
 * struct dog - New strut named dog
 * @name: Elemant 1
 * @age: Element 2
 * @owner: Element 3
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif

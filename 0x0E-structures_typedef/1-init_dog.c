#include "dog.h"

/**
 * init_dog - int dog
 * @d: dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == 0)

d = malloc(sizeof(struct dog));

d->name = name;
d->age = age;
d->owner = owner;

}

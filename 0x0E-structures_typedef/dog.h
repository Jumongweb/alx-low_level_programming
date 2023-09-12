#ifndef DOG_H
#define DOG_H

/**
 * struct dog - information about dog
 * @name: identity of the dog
 * @age: the age of the dog
 * @owner: the person the dog belong to
 */

struct dog
{
char *name;
float age;
char *owner;
};

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

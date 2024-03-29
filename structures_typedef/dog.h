#ifndef _dog_
#define _dog_
/**
 *struct dog - an structure based on a dog
 *@name: - the name of the dog
 *@age: - the age of the dog
 *@owner: - the owner of the dog
 */

typedef struct dog
{
char *name;
float age;
char *owner;
} dog;

typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

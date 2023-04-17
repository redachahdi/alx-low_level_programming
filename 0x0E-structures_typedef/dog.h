#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - is stores the information of the dog
 * @name: is the name of the dog
 *
 * @age: is the age of the dog
 * @owner: is the owner of the dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(dog_t *d, char *name, float age, char *owner);
void free_dog(dog_t *d);
void print_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif

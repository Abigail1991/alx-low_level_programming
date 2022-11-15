#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog structures
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Decription: the structures of a dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
}

/*type definition for dog structure*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(god_t *d);

#endif

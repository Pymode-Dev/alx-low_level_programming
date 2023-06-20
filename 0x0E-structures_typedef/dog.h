#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog - Information about a dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the name of the owner
 *
 * Desc: stores a dog info
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 *dog_t - new struct typedef
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);


#endif /* _DOG_H_ */

#ifndef dog_h
#define dog_h

/**
 * struct dog - create a new type dog
 * @name: of dog
 * @age : of dog
 * @owner: of dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif

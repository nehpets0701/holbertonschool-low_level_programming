#ifndef DOG_H
#define DOG_H
typedef struct dog dog_t;

/**
 *struct dog-dog
 *@name:name
 *@age:age
 *@owner:owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif

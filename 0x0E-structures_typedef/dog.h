#ifndef DOG_H
#define DOG_H
/**
 * struct dog - The new data type
 * @name: first member variable
 * @age: second member variable
 * @owner: third member variable
 *
 * Description: Define a new type struct dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

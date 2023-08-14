#ifndef DOG_H
#define DOG_H

/*
 * File: dog.h
 * Description: A Header file that defines a new type struct dog
 */

/**
 * struct dog - Decribing a dog
 * @name: Name of Dog
 * @age:  Age of Dog
 * @owner: Dog's Owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

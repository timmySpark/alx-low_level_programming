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

#endif

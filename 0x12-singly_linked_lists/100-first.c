#include "lists.h"
#include <stdio.h>

void __attribute__((constructor)) tortoise_and_hare(void);


/**
 * _tortoise_and_hare - print a message
 */

void tortoise_and_hare(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");

}

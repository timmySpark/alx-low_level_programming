#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * Defining constant value
 */

#define TARGET_SUM 2772
#define ASCII_START 33
#define ASCII_RANGE 94

/**
 * main - Generates random valid passwords for the
 *        program 101-crackme.
 *
 * Return: Always 0.
 */


int main(void)
{
    char password[84];
    int index = 0, sum = 0, diff;

    srand(time(0));

    while (sum < TARGET_SUM)
    {
        password[index] = ASCII_START + rand() % ASCII_RANGE;
        sum += password[index++];
    }

    password[index] = '\0';

    if (sum > TARGET_SUM)
    {
        diff = sum - TARGET_SUM;
        for (index = 0; diff && password[index]; index++)
        {
            if (password[index] > ASCII_START + diff)
            {
                password[index] -= diff;
                diff = 0;
            }
        }
    }

    printf("%s", password);

    return (0);
}


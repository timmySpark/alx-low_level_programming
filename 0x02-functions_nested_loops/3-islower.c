#include "main.h"

/**
 * _islower - check main
 * c : an input from the user
 * Description : a function that checks for lowercase characters
 * Returns : 1 if c is lowercase and 0 if otherwise
 */


int _islower(int c)
{
        char alpha;
        int lower = 0;

        for (alpha = 'a'; alpha <= 'z'; alpha++)
                if (alpha == c)
                        lower = 1;
        return (lower);
}


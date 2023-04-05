#include "main.h"

/**
 * using uppercase for _isupper 
 * checking with char
 *
 */

int _isupper(int c)
{
        if (c >= 'A' && c <= 'Z')
                return (1);
        else
                return (0);
}

#include "utils/my_lib.h"

char *my_strcpy(char *dest, char const *src)
{
    size_t i = 0;

    for (; src[i]; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return dest;
}

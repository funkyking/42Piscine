#include <unistd.h>
#include <string.h>
#include <stdio.h>

char *ft_strcpy(char *dest, char *src)
{
    char *tmp = dest;
    
    while (*src != '\0')
    {
        *tmp = *src;
        tmp++;
        src++;
    }
    *tmp = '\0';
    return (dest);
}

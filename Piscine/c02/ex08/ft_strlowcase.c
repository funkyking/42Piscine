#include <unistd.h>
#include <string.h>
#include <stdio.h>

char    *ft_strupcase(char *str)
{
    int	i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
        i++;
    }
    return (str);
}

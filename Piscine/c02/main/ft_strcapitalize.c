#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

char *ft_strcapitalize (char *str)
{   
    int i;
    
    i = 0;
    bool start = true;
    while (str[i])
    {
        if (start && isalpha (str[i]))
	    {
	        str[i] = toupper (str[i]);
	        start = false;
	    }
        else
	    {
	        str[i] = tolower (str[i]);
	        if (str[i] == '.' || str[i] == '?' || str[i] == '!' || str[i] == ' ')
	        {
	            start = false;
	        }
	    }
        i++;
    }
    return str;
}

int main ()
{
  char str[] = "the wORld is so dark";
  printf ("%s", ft_strcapitalize (str));
}

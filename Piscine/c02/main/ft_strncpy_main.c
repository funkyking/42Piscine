#include <unistd.h>
#include <string.h>
#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;
    
    while (src[i] != '\0' && i < n)
    {
       dest[i] = src[i];
       i++;
    }
    while (i < n)
    {
        dest[i] = '\0';
        i++;
    }
    return (dest);
}

int main ()
{
   char src[40];
   char dest[40];
  
   memset(dest, '\0', sizeof(dest));
   strcpy(src, "finally, a worthy opponent");
   strncpy(dest, src, 3);

   printf("Final copied string : %s\n", dest);
   
   return(0);
}

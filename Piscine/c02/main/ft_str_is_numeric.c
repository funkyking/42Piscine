#include <unistd.h>
#include <string.h>
#include <stdio.h>

int ft_str_is_alpha(char *str)
{
    int	i;

	i = 0;
	if (str[i] == '\0' )
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str [i] <= '9')
			i++;
		else
			return (0);
	}	
	return (1);
}


int main()
{
	printf("%d", ft_str_is_alpha("1111222222"));
	printf("\n%d", ft_str_is_alpha("abcde2fghijkl"));
	printf("\n%d", ft_str_is_alpha("2bas134556efghij67"));
	
	return (0);
}

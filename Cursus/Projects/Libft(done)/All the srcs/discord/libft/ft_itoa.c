#include "libft.h"

static size_t	ft_count_digist(int n)
{
	size_t count;

	count = 0;
	while (n)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static void		ft_write_nbrber(char *dest, unsigned int n)
{
	if (n < 10)
		*dest = n + '0';
	else
	{
		*dest = n % 10 + '0';
		ft_write_nbrber(dest - 1, n / 10);
	}
}

char			*ft_itoa(int n)
{
	unsigned int	nbr;
	char			*result;
	size_t			len;

	nbr = n;
	if (n == 0)
		return (ft_strdup("0"));
	else
	{
		len = n < 0 ? ft_count_digist(n) + 1 : ft_count_digist(n);
		if (!(result = (char *)malloc(sizeof(char) * (len + 1))))
			return (0);
		ft_write_nbrber((result + len - 1), n < 0 ? -nbr : nbr);
		if (n < 0)
			*result = '-';
		result[len] = '\0';
	}
	return (result);
}

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dp;
	const unsigned char	*sp;

	if (!dest && !src)
		return (0);
	if (dest > src)
	{
		dp = dest + n;
		sp = src + n;
		while (n-- > 0)
		{
			*--dp = *--sp;
		}
	}
	else
	{
		dp = dest;
		sp = src;
		while (n-- > 0)
		{
			*dp++ = *sp++;
		}
	}
	return (dest);
}

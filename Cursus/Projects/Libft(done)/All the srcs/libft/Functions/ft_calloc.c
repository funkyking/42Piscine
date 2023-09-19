#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void *result;

	if (!(result = malloc(nmemb * size)))
		return (0);
	ft_bzero(result, nmemb * size);
	return (result);
}

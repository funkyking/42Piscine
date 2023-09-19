#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char *result;

	if (ft_strlen(s) < start)
		return (ft_strdup(""));
	if (!(result = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	ft_memcpy(result, s + start, len);
	result[len] = '\0';
	return (result);
}

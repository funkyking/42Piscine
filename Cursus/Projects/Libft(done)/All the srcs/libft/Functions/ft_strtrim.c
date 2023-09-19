#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*result;

	while (*s1 && ft_strchr(set, *s1) != 0)
		s1++;
	len = ft_strlen(s1);
	while (len && s1[len - 1] && ft_strchr(set, s1[len - 1]) != 0)
		len--;
	if (!(result = (char *)malloc(sizeof(char) * (len + 1))))
		return (0);
	ft_memcpy(result, s1, len);
	result[len] = '\0';
	return (result);
}

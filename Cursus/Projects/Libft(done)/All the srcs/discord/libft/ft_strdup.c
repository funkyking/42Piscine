#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	slen;
	char	*result;

	slen = ft_strlen(s);
	if (!(result = (char *)malloc(sizeof(char) * (slen + 1))))
		return (0);
	slen = 0;
	while (s[slen])
	{
		result[slen] = s[slen];
		slen++;
	}
	result[slen] = '\0';
	return (result);
}

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int	i;
	char	*res;

	res = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!res)
		return (NULL);
	i = -1;
	while (s[++i])
		res[i] = s[i];
	res[i] = 0;
	return (res);
}

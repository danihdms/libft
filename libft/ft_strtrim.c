#include "libft.h"

static int	is_in_set(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
		if (c == set[i++])
			return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		iter;
	char	*res;

	start = 0;
	end = ft_strlen(s1) - 1;
	iter = 0;
	while (s1[start] && is_in_set(s1[start], set))
		start++;
	while (end > start && is_in_set(s1[end], set))
		end--;
	res = malloc(sizeof(char) * (end - start + 2));
	if (!res)
		return (NULL);
	while (start <= end)
		res[iter++] = s1[start++];
	res[iter] = 0;
	return (res);
}

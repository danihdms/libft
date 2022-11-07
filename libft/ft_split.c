#include "libft.h"

int	get_nb_words(char const *s, char c)
{
	int	i;
	int	acc;

	i = 0;
	acc = 0;
	while (s[i])
		if(s[i++] == c)
			acc++;
	if (s[i - 1] != c)
		acc++;
	return (acc);
}

int	get_wd_len(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

void	free_prev(char **split)
{
	int	i;

	i = 0;
	while (split[i])
		free(split[i++]);
	free(split);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	j;
	size_t	k;
	char	**res;

	res = malloc(sizeof(char *) * (get_nb_words(s, c) + 1));
	if (!res)
		return (NULL);
	i = -1;
	j = 0;
	while (++i < ft_strlen(s))
	{
		res[j] = malloc(sizeof(char) * (get_wd_len(&s[i], c) + 1));
		if (!res[j])
		{
			free_prev(res);
			return (NULL);
		}
		k = 0;
		while (s[i] && s[i] != c)
			res[j][k++] = s[i++];
		res[j][k] = 0;
		j++;
	}
	res[j] = NULL;
	return (res);
}

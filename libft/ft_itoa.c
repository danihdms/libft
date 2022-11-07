#include "libft.h"

static int	get_nb_digits(int n)
{
	int	i;

	i = (n == 0);
	while (n != 0)
	{
		i++;
		n /= 10;
	}
	return (i);
}

static void	work(long n, char *res, int *pos)
{
	if (n < 0)
	{
		res[*pos] = '-';
		(*pos)++;
		n *= -1;
	}
	if (n < 10)
		res[(*pos)++] = n + '0';
	else
	{
		work(n / 10, res, pos);
		work(n % 10, res, pos);
	}
}

char	*ft_itoa(int n)
{
	int		mc_size;
	int		long_n;
	int		*pos;
	char	*res;

	pos = malloc(sizeof(int));
	*pos = 0;
	long_n = n;
	mc_size = get_nb_digits(n) + (n < 0);
	res = malloc(sizeof(char) * (mc_size + 1));
	if (!res)
		return (NULL);
	work(long_n, res, pos);
	free(pos);
	return (res);
}

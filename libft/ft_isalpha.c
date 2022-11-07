#include "libft.h"

int	ft_isalpha(unsigned char c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

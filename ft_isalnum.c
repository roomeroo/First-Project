
#include "libft.h"
int	ft_isalnum (int c)
{
	if(c >= 'A' && c <= 'Z')
		return (c);
	else if(c >= 'a' && c <= 'z')
		return (c);
	else if( c >= 0 && c <= 9)
		return (c + '0');
	return (0);
}

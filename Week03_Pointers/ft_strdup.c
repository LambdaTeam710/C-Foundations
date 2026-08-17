#include <stdlib.h>

size_t	ft_strlen(const char	*str)
{
	size_t	i;

	if(str == NULL)
	{
		return(0);
	}

	i = 0;
	while(str[i] != '\0')
	{
		i++;
	}

	return(i);
}

char	*ft_strdup(const char	*src)
{
	size_t	i;
	char	*dup;

	if(src == NULL)
	{
		return(NULL);
	}

	dup = malloc(ft_strlen(src) + 1);
	if(dup == NULL)
	{
		return(NULL);
	}

	i = 0;
	while(src[i] != '\0')
	{
		dup[i] = src[i];
		i++;
	}

	dup[i] = '\0';
	return(dup);
}


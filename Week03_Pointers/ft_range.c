#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	size;
	int	*range;
	int	i;

	if(min >= max)
	{
		return(NULL);
	}

	size = max - min;

	range = malloc(size * sizeof(int));
	if(range == NULL)
	{
		return(NULL);
	}

	i = 0;
	while(i < size && min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return(range);
}

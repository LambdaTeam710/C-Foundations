#include <stdio.h>
#include <stdlib.h>

void	ft_swap(int *a, int *b);
char	*ft_strdup(char	*src);
int	*ft_range(int min, int max);

int	main(void)
{
	//ft_swap
	int x = 1;
	int y = 2;
	//ft_strdup
	char	*original = "HELLO THERE!";
	char	*copy;
	//ft_range
	int	i = 0;
	int	*arr;
	int	min = 18;
	int	max = 26;

	printf("--ft_swap--\n\n");
	printf("BEFORE SWAP, x = %d y = %d\n", x, y);
	ft_swap(&x, &y);
	printf("AFTER SWAP, x = %d y = %d\n", x, y);
	printf("\n--ft_strdup--\n\n");
	copy = ft_strdup(original);
	if(copy == NULL)
	{
		printf("Allocation Failed!");
		return(1);
	}

	printf("The Original String is : %s at the address %p\n", original, (void *)original);
	printf("The Duplicated String is : %s at the address %p\n", copy, (void *)copy);
	printf("\n--ft_range--\n\n");
	arr = ft_range(min, max);
	printf("The Min Value is : %d , The Max Value is : %d \n", min,max);
	printf("The range Is : ");
	while(i < (max - min))
	{
		printf("%d, ", arr[i]);
		i++;}
	printf(" (Max Excluded - Min Included)");
	printf("\n");

	free(arr);
	free(copy);
	return (0);
}

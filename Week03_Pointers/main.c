#include <stdio.h>

void	ft_swap(int *a, int *b);

int	main(void)
{
	//ft_swap
	int x = 1;
	int y = 2;

	printf("--ft_swap--\n\n");
	printf("BEFORE SWAP, x = %d y = %d\n", x,y);
	ft_swap(&x, &y);
	printf("AFTER SWAP, x = %d y = %d\n", x,y);
	return (0);
}

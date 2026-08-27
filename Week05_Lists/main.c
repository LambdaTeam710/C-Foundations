#include <stdio.h>
#include "ft_list.h"

int	main(void)
{
	//ft_lstnew
	t_node *a_node = ft_lstnew(42);
	
	printf("\n--ft_lstnew--\n\n");
	printf("Data : %d\n", a_node->data);
	printf("At : %p\n", (void *)a_node->next);

	free(a_node);
	return (0);
}

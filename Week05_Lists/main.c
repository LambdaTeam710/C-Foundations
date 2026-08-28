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

	//ft_lstadd_front
	t_node *head;
	t_node *current;

	head = NULL;
	t_node *node_1 = ft_lstnew(10);
	t_node *node_2 = ft_lstnew(20);
	t_node *node_3 = ft_lstnew(30);
	
	ft_lstadd_front(&head, node_1);
	ft_lstadd_front(&head, node_2);
	ft_lstadd_front(&head, node_3);
	current = head;
	printf("\n\n--ft_lstadd_front--\n");
	while(current != NULL)
	{
		printf("data : %d\n at : %p\n", current->data, (void *)current->next);
		current = current->next;
	}

	free(node_1);
	free(node_2);
	free(node_3);
	head = NULL;
	return (0);
}

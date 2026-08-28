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

	//ft_lstadd_front + ft_lstsize
	t_node *head;
	t_node *current;
	int	counter;

	head = NULL;
	t_node *node_1 = ft_lstnew(10);
	t_node *node_2 = ft_lstnew(20);
	t_node *node_3 = ft_lstnew(30);
	
	ft_lstadd_front(&head, node_1);
	ft_lstadd_front(&head, node_2);
	ft_lstadd_front(&head, node_3);
	counter = ft_lstsize(head);
	current = head;
	printf("\n\n--ft_lstadd_front--\n");
	while(current != NULL)
	{
		printf("data : %d\n at : %p\n", current->data, (void *)current->next);
		current = current->next;
	}
	printf("\n\n--ft_lstsize--\n");
	printf("Node Counts : %d\n", counter);
	//ft_lstclear
	ft_lstclear(&head);
	printf("\n\n--ft_lstclear--\n");
	printf("HEAD after clear: %p\n", (void *)head);
	return (0);
}

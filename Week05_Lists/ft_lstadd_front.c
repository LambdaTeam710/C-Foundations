#include "ft_list.h"

void	ft_lstadd_front(t_node **head, t_node *new_node)
{
	new_node->next = *head;
	*head = new_node;
}

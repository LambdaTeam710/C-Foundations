#include "ft_list.h"

void	ft_lstclear(t_node **head)
{
	t_node	*temp;

	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}

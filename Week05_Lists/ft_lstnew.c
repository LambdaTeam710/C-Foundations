#include "ft_list.h"

t_node	*ft_lstnew(int data)
{
	t_node *new_node;

	new_node = malloc(sizeof(t_node));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->data = data;
	new_node->next = NULL;

	return (new_node);
}

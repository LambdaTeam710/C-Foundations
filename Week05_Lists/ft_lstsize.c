#include "ft_list.h"

int	ft_lstsize(t_node *head)
{
	int	count;
	t_node	*walker;
	
	count = 0;
	walker = head;
	while (walker != NULL)
	{
		count++;
		walker = walker->next;
	}
	return (count);
}

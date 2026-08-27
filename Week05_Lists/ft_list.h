#ifndef FT_LIST_H
# define FT_LIST_H

#include <stdlib.h>

//Struct Definition
typedef struct s_node
{
	int	data;
	struct	s_node *next;
}t_node;

//function prototype
t_node *ft_lstnew(int data);
void	ft_lstadd_front(t_node **head, t_node *new_node);
int	ft_lstsize(t_node *head);
void	ft_lstclear(t_node **head);

#endif

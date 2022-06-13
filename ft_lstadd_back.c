#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*list;

	list = lst[0];
	if (list)
	{
		while (list->next)
			list = list->next;
		list->next = new;
	}
	else
		lst[0] = new;
}
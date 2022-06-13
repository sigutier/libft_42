#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	tmp = lst[0];
	if (!del || !tmp)
		return ;
	while (tmp)
	{
		tmp = lst[0]->next;
		ft_lstdelone(lst[0], del);
		lst[0] = tmp;
	}
}
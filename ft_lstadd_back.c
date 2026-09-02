#include "libft.h"

void	ft_listadd_back(t_list **list, t_list *new_list)
{
	t_list	*last;

	if (!list || !new_list)
		return ;
	if (!*list)
	{
		*list = new_list;
		return ;
	}
	last = ft_listlast(*list);
	last->next = new_list;
}
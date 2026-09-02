#include "libft.h"

void    ft_lstclear(t_list  **list, void (*del)(void *))
{
    t_list  *temp;

    if(!list || !del)
        return ;
    while (*list)
    {
        temp = (*list)->next;
        ft_lstdelone(*list, del);
        *list = temp;
    }
    *list = NULL;
}
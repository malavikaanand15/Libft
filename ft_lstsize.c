#include "libft.h"

int ft_lstsize(t_list *list)
{
    int count;

    count = 0;
    while (list)
    {
        count++;
        list = list->next;
    }
    return (count);
}
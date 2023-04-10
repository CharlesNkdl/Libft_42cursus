#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
    t_list  *ptr;
    t_list  *repli;

    if (!lst || !del)
        return;
    ptr = *lst;
    while (ptr)
    {
        repli = ptr->next;
        del(ptr->content);
        free(ptr);
        ptr = repli;
    }
    *lst = NULL;
}

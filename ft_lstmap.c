#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *),void (*del)(void *))
{
    t_list  *cpy;
    t_list  *check;

    if (!lst || !f || !del)
		return (NULL);
    cpy = 0;
    while (lst)
    {
        check = ft_lstnew(f(lst->content));
        if (!check)
        {
            ft_lstclear(&cpy,del);
            return (NULL);
        }
        ft_lstadd_back(&cpy, check);
        lst = lst->next;
    }
    return (cpy);
}

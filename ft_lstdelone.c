
#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	t_list	*next;

	if (!lst)
		return ;
	next = lst->next;
	del(lst->content);
	free(lst);
	lst = next;
}
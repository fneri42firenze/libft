
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (new == NULL)
		return ;
	if (*lst == NULL)
		*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last->next = new;
	}
}

/*int main()
{
	t_list *new;
	t_list *new1;
	t_list *new2;
	char *str = "Hello";
	char *str1 = "World";
	char *str2 = "!";
	new = ft_lstnew(str);
	new1 = ft_lstnew(str1);
	new2 = ft_lstnew(str2);
	ft_lstadd_back(&new, new1);
	ft_lstadd_back(&new, new2);
	printf("%s\n", (char *) new->content);
	printf("%s\n", (char *) new->next->content);
	printf("%s\n", (char *) new->next->next->content);
	return (0);
}*/
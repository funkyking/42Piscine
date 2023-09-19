#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*cur;
	cur = lst;
	while (cur != NULL)
	{
		f(cur->content);
		cur = cur->next;
	}
}
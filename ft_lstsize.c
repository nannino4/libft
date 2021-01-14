#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int		counter;
	t_list	*tmp;

	counter = 0;
	tmp = lst;
	while (tmp)
	{
		counter++;
		tmp = tmp->next;
	}
	return (counter);
}

#include "list.h"
#include "unistd.h"

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list *temp = lst; 

	while (temp->next)
	{
		if (!cmp(temp->data, temp->next->data))
		{
			int swap = temp->data;
			temp->data = temp->next->data;
			temp->next->data = swap;
			temp = lst;
		}
		else
			temp = temp->next;
	}
	return (lst);
}
typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;

#include "stddef.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	while (begin_list != NULL)
	{
		if (begin_list->data != NULL)
			(*f)(begin_list->data);
		begin_list = begin_list->next;
	}
}
#include "main.h"

void	request(t_item **lst, t_item *new)
{
	t_item	*aux;
	t_item	*tmp;

	if (!new)
		return ;
	if (!(*lst))
		*lst = new;
	else if (new->flag > (*lst)->flag)
	{
		new->next = *lst;
		*lst = new;
		return ;
	}
	else
	{
		tmp = *lst;
		while (tmp->next)
		{
			if ((tmp->next)->flag < new->flag)
			{
				aux = tmp->next;
				tmp->next = new;
				new->next = aux;
				return ;
			}
			tmp = tmp->next;
		}
		tmp->next = new;
	}
}

t_item	*new_lst(int flag, int id)
{
	t_item	*item;

	item = malloc(sizeof(t_item));
	item->flag = flag;
	item->id = id;
	item->next = NULL;
	return (item);
}
//talvez seja possivel uma função só pra todos os obj, que sete apenas o x e y.

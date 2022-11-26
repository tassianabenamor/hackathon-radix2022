#ifndef MAIN_H
# define MAIN_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct s_item {
	int				flag;
	int				id;
	struct s_item	*next;
}	t_item;

typedef struct s_global {
	t_item	*insumo;
	t_item	*quimico;
	t_item	*ferramenta;
}	t_global;

void	add_item(t_global *global);
t_item	*new_lst(int flag, int id);
void	request(t_item **lst, t_item *new);



#endif

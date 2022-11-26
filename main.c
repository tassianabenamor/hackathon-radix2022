#include "main.h"

static void	init_global(t_global *global)
{
	global->insumo = NULL;
	global->quimico = NULL;
	global->ferramenta = NULL;
}

static void	print_list_id(t_item *item, char *name, int id)
{
	printf("Lista de %s\n", name);
	while (item)
	{
		if (id == item->id)
			printf("Severidade: %i | id: %i\n", item->flag, item->id);
		item = item->next;
	}
}

static void	print_list(t_item *item, char *name)
{
	printf("Lista de %s\n", name);
	while (item)
	{
		printf("Severidade: %i | id: %i\n", item->flag, item->id);
		item = item->next;
	}
}

int	main(void)
{
	int			bytes_read;
	char		buffer[2];
	t_global	global;

	init_global(&global);
	while (1)
	{
		printf("1 - Adicionar item\nOutro - Sair\n");
		bytes_read = read(1, buffer, 1);
		buffer[bytes_read] = '\0';
		switch (buffer[0])
		{
			case '\0':
				return (0);
			break ;
			case '1':
				add_item(&global);
			break ;
		}
	}
	return (0);
}

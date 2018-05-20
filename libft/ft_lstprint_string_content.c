#include "libft.h"

void	ft_lstprint_string_content(t_list *lst)
{
	if (lst)
		ft_putendl((char*) lst->content);
}

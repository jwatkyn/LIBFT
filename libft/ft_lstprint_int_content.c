#include "libft.h"

void	ft_lstprint_int_content(t_list *lst)
{
	ft_putendl(ft_itoa(*((int*)(lst->content))));
}

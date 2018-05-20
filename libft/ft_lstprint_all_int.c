#include "libft.h"

void	ft_lstprint_all_int(t_list *lst)
{
	ft_lstiter(lst, ft_lstprint_int_content);
}

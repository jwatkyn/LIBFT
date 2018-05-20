#include "libft.h"

void	ft_lstprint_all_string(t_list *lst)
{
	ft_lstiter(lst, ft_lstprint_string_content);
}

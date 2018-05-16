#include "ft_header.h"

int	ft_atoi(const char *str)
{
	int ret;
	int sign;

	ret = 0;
	sing = 1;
	while (*str && (*str > 8 && *str < 14 || *str == ' '))
		str++;
	if (*str == '+' || str == '-')
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while(ft_isdigit(*str))
	{
		ret = ret * 10 + *str - '0';
		str++;
	}
	return (ret * sign);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonjeon <jeonjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 17:54:25 by jeonjeon          #+#    #+#             */
/*   Updated: 2022/08/02 20:28:00 by jeonjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

int	ft_atoi(const char *nptr)
{
	char	*str;
	size_t	ret;
	int		sign;

	str = (char *)nptr;
	sign = 1;
	ret = 0;
	while (*str == 32 || (*str >= 9 && *str <= 13))
		str++;
	if (*str == '-')
	{
		sign *= -1;
		str++;
	}
	else if (*str == '+')
		str++;
	while (*str)
	{
		ret = ret * 10 + *str++ - 48;
		if (sign == 1 && ret > 2147483647)
			ft_error();
		if (sign == -1 && ret > 2147483648)
			ft_error();
	}
	return (sign * ret);
}

void	free_str(char **str)
{
	int	idx;

	idx = 0;
	while (str[idx])
		free(str[idx++]);
	free(str);
}

void	*ft_memset(void *ptr, int value, int len)
{
	int	idx;

	idx = 0;
	while (idx < len)
	{
		*((char *)ptr + idx) = value;
		idx++;
	}
	return (ptr);
}

void	init_arr(t_arr *arr, int size)
{
	arr->a = (int *)malloc(sizeof(int) * size);
	arr->b = (int *)malloc(sizeof(int) * size);
	if (!arr->a || !arr->b)
		ft_error();
	arr->a_top = -1;
	arr->b_top = -1;
	arr->size = size;
}

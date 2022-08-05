/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   element.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonjeon <jeonjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:49:52 by jeonjeon          #+#    #+#             */
/*   Updated: 2022/08/02 20:13:33 by jeonjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_size(const char *str)
{
	int	size;
	int	check;

	size = 0;
	check = 1;
	while (*str)
	{
		if (check && *str != ' ')
		{
			++size;
			check = 0;
		}
		if (*str == ' ')
			check = 1;
		++str;
	}
	if (size == 0)
		ft_error();
	return (size);
}

int	check_element(char *argv[])
{
	int	idx;
	int	idx2;

	idx = 1;
	while (argv[idx])
	{
		idx2 = 0;
		while (argv[idx][idx2])
		{
			if ((argv[idx][idx2] >= '0' && argv[idx][idx2] <= '9') ||
				(argv[idx][idx2] == '-' &&
				argv[idx][idx2 + 1] >= '0' && argv[idx][idx2 + 1] <= '9') ||
				argv[idx][idx2] == ' ')
				++idx2;
			else
				return (0);
		}
		++idx;
	}
	return (1);
}

void	check_dup(t_arr *arr, int num)
{
	int	idx;

	idx = 0;
	while (idx <= arr->a_top)
	{
		if (arr->a[idx] == num)
			ft_error();
		idx++;
	}
}

void	swap_stack(t_arr *arr)
{
	int		left;
	int		right;
	int		temp;

	left = 0;
	right = arr->a_top;
	while (left < right)
	{
		temp = arr->a[left];
		arr->a[left] = arr->a[right];
		arr->a[right] = temp;
		++left;
		--right;
	}
}

void	mk_element(char **argv, int argc, t_arr *arr)
{
	int		idx;
	int		idx2;
	int		size;
	char	**split;

	idx = 1;
	size = 0;
	if (!check_element(argv))
		ft_error();
	while (argv[idx])
		size += check_size(argv[idx++]);
	init_arr(arr, size);
	idx = 1;
	while (argc > idx)
	{
		idx2 = 0;
		split = ft_split(argv[idx++], ' ');
		while (split[idx2])
		{
			check_dup(arr, ft_atoi(split[idx2]));
			arr->a[++arr->a_top] = ft_atoi(split[idx2++]);
		}
		free_str(split);
	}
	swap_stack(arr);
}

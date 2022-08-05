/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pivot.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonjeon <jeonjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 18:44:27 by jeonjeon          #+#    #+#             */
/*   Updated: 2022/08/03 16:58:10 by jeonjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*copy_arr(t_arr *arr, int size, int flag)
{
	int	*copy;
	int	idx;

	idx = -1;
	copy = (int *)malloc(sizeof(int) * size);
	if (copy == NULL)
		ft_error();
	if (flag == 1)
	{
		while (++idx < size)
			copy[idx] = arr->a[arr->a_top - idx];
	}
	else
	{
		while (++idx < size)
			copy[idx] = arr->b[arr->b_top - idx];
	}
	return (copy);
}

t_pivot	get_pivot(t_arr *arr, int size, int flag)
{
	t_pivot	pivot;
	int		*copy;
	int		term;

	copy = copy_arr(arr, size, flag);
	ft_sort(copy, size);
	term = size / 3;
	if (flag == 1)
	{
		pivot.pivot_1 = copy[size - term];
		pivot.pivot_2 = copy[size - term * 2];
	}
	else
	{
		pivot.pivot_1 = copy[term * 2 - 1];
		pivot.pivot_2 = copy[term - 1];
	}
	free(copy);
	return (pivot);
}

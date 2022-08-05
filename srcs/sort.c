/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonjeon <jeonjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 19:12:12 by jeonjeon          #+#    #+#             */
/*   Updated: 2022/08/02 20:26:30 by jeonjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_sort(int *copy, int size)
{
	int	idx1;
	int	idx2;
	int	term;

	idx1 = -1;
	while (++idx1 < size - 1)
	{
		idx2 = idx1;
		while (++idx2 < size)
		{
			if (copy[idx1] > copy[idx2])
			{
				term = copy[idx1];
				copy[idx1] = copy[idx2];
				copy[idx2] = term;
			}
		}
	}
}

void	small_sort_a(t_arr *arr, int size)
{
	if (size == 2 || size == 3)
	{
		if (arr->a[arr->a_top] > arr->a[arr->a_top - 1])
			sa(arr, 1);
		if (size == 3)
		{
			if (arr->a[arr->a_top - 1] > arr->a[arr->a_top - 2])
			{
				ra(arr, 1);
				sa(arr, 1);
				rra(arr, 1);
				if (arr->a[arr->a_top] > arr->a[arr->a_top - 1])
					sa(arr, 1);
			}
		}
	}
	if (size == 4)
		four_sort(arr);
}

void	small_sort_b(t_arr *arr, int size)
{
	if (size >= 1 && size <= 3)
		pa(arr);
	if (size == 2 || size == 3)
	{
		pa(arr);
		if (arr->a[arr->a_top] > arr->a[arr->a_top - 1])
			sa(arr, 1);
		if (size == 3)
		{
			pa(arr);
			if (arr->a[arr->a_top] > arr->a[arr->a_top - 1])
				sa(arr, 1);
			if (arr->a[arr->a_top - 1] > arr->a[arr->a_top - 2])
			{
				ra(arr, 1);
				sa(arr, 1);
				rra(arr, 1);
				if (arr->a[arr->a_top] > arr->a[arr->a_top - 1])
					sa(arr, 1);
			}
		}
	}
}

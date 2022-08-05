/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ab_to_ab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonjeon <jeonjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 15:46:51 by jeonjeon          #+#    #+#             */
/*   Updated: 2022/08/02 20:26:43 by jeonjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	a_to_b(t_arr *arr, int size)
{
	t_count	count;
	t_pivot	pivot;
	int		idx;

	count = (t_count){0, 0, 0, 0};
	if (check_sort_a(arr, size))
		return ;
	if (size <= 4)
	{
		small_sort_a(arr, size);
		return ;
	}
	pivot = get_pivot(arr, size, 1);
	a_to_b_sub(arr, &count, pivot, size);
	idx = -1;
	while (++idx < count.ra)
		rrr(arr);
	a_to_b(arr, count.ra);
	b_to_a(arr, count.rb);
	b_to_a(arr, count.pb - count.rb);
}

void	b_to_a(t_arr *arr, int size)
{
	t_count	count;
	t_pivot	pivot;
	int		idx;

	count = (t_count){0, 0, 0, 0};
	if (check_sort_b(arr, size))
	{
		while (size--)
			pa(arr);
		return ;
	}
	if (size <= 3)
	{
		small_sort_b(arr, size);
		return ;
	}
	pivot = get_pivot(arr, size, 0);
	b_to_a_sub(arr, &count, pivot, size);
	a_to_b(arr, count.pa - count.ra);
	idx = -1;
	while (++idx < count.ra)
		rrr(arr);
	a_to_b(arr, count.rb);
	b_to_a(arr, count.ra);
}

void	a_to_b_sub(t_arr *arr, t_count *count, t_pivot pivot, int size)
{
	int	idx;

	idx = -1;
	while (++idx < size)
	{
		if (arr->a[arr->a_top] >= pivot.pivot_1)
		{
			ra(arr, 1);
			count->ra++;
		}
		else
		{
			pb(arr);
			count->pb++;
			if (arr->b[arr->b_top] >= pivot.pivot_2)
			{
				rb(arr, 1);
				count->rb++;
			}
		}
	}
}

void	b_to_a_sub(t_arr *arr, t_count *count, t_pivot pivot, int size)
{
	int	idx;

	idx = -1;
	while (++idx < size)
	{
		if (arr->b[arr->b_top] <= pivot.pivot_2)
		{
			rb(arr, 1);
			count->rb++;
		}
		else
		{
			pa(arr);
			count->pa++;
			if (arr->a[arr->a_top] <= pivot.pivot_1)
			{
				ra(arr, 1);
				count->ra++;
			}
		}
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonjeon <jeonjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 17:05:56 by jeonjeon          #+#    #+#             */
/*   Updated: 2022/08/02 20:26:09 by jeonjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	three_sort(t_arr *arr)
{
	if (arr->a[2] > arr->a[1])
		sa(arr, 1);
	if (arr->a[1] > arr->a[0])
	{
		rra(arr, 1);
		if (arr->a[2] > arr->a[1])
			sa(arr, 1);
	}
}

void	four_sort(t_arr *arr)
{
	if (arr->a[arr->a_top] > arr->a[arr->a_top - 1])
		sa(arr, 1);
	pb(arr);
	if (arr->a[arr->a_top] > arr->a[arr->a_top - 1])
		sa(arr, 1);
	pb(arr);
	if ((arr->a[arr->a_top] > arr->a[arr->a_top - 1])
		&& (arr->b[arr->b_top] < arr->b[arr->b_top - 1]))
		ss(arr);
	else if (arr->a[arr->a_top] > arr->a[arr->a_top - 1])
		sa(arr, 1);
	else if (arr->b[arr->b_top] < arr->b[arr->b_top - 1])
		sb(arr, 1);
	pa(arr);
	if (arr->a[arr->a_top] > arr->a[arr->a_top - 1])
		sa(arr, 1);
	pa(arr);
	if (arr->a[arr->a_top] > arr->a[arr->a_top - 1])
		sa(arr, 1);
}

void	five_sort(t_arr *arr)
{
	int	*copy;
	int	idx;

	idx = -1;
	copy = copy_arr(arr, 5, 1);
	ft_sort(copy, 5);
	while (++idx < 5)
	{
		if (copy[1] >= arr->a[arr->a_top])
			pb(arr);
		else
			ra(arr, 1);
	}
	three_sort(arr);
	if (arr->b[0] > arr->b[1])
		sb(arr, 1);
	pa(arr);
	pa(arr);
	free(copy);
}

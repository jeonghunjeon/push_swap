/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonjeon <jeonjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 16:54:02 by jeonjeon          #+#    #+#             */
/*   Updated: 2022/08/01 16:58:08 by jeonjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check_sort_a(t_arr *arr, int size)
{
	int	idx;

	idx = arr->a_top - size;
	while (++idx < arr->a_top)
	{
		if (arr->a[idx] < arr->a[idx + 1])
			return (0);
	}
	return (1);
}

int	check_sort_b(t_arr *arr, int size)
{
	int	idx;

	idx = arr->b_top - size;
	while (++idx < arr->b_top)
	{
		if (arr->b[idx] > arr->b[idx + 1])
			return (0);
	}
	return (1);
}

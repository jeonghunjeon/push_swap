/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_rr.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonjeon <jeonjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 20:35:52 by jeonjeon          #+#    #+#             */
/*   Updated: 2022/08/01 20:35:10 by jeonjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_arr *arr, int flag)
{
	int	temp;
	int	idx;

	idx = 0;
	temp = arr->a[0];
	while (idx < arr->a_top)
	{
		arr->a[idx] = arr->a[idx + 1];
		++idx;
	}
	arr->a[arr->a_top] = temp;
	if (flag)
		write(1, "rra\n", 4);
}

void	rrb(t_arr *arr, int flag)
{
	int	temp;
	int	idx;

	idx = 0;
	temp = arr->b[0];
	while (idx < arr->b_top)
	{
		arr->b[idx] = arr->b[idx + 1];
		++idx;
	}
	arr->b[arr->b_top] = temp;
	if (flag)
		write(1, "rrb\n", 4);
}

void	rrr(t_arr *arr)
{
	rra(arr, 0);
	rrb(arr, 0);
	write(1, "rrr\n", 4);
}

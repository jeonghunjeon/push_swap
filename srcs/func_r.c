/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_r.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonjeon <jeonjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 20:35:44 by jeonjeon          #+#    #+#             */
/*   Updated: 2022/07/28 16:57:25 by jeonjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_arr *arr, int flag)
{
	int	temp;
	int	idx;

	idx = arr->a_top;
	temp = arr->a[arr->a_top];
	while (idx > 0)
	{
		arr->a[idx] = arr->a[idx - 1];
		--idx;
	}
	arr->a[0] = temp;
	if (flag)
		write(1, "ra\n", 3);
}

void	rb(t_arr *arr, int flag)
{
	int	temp;
	int	idx;

	idx = arr->b_top;
	temp = arr->b[arr->b_top];
	while (idx > 0)
	{
		arr->b[idx] = arr->b[idx - 1];
		--idx;
	}
	arr->b[0] = temp;
	if (flag)
		write(1, "rb\n", 3);
}

void	rr(t_arr *arr)
{
	ra(arr, 0);
	rb(arr, 0);
	write(1, "rr\n", 3);
}

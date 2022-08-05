/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_s.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonjeon <jeonjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 20:36:01 by jeonjeon          #+#    #+#             */
/*   Updated: 2022/07/28 16:57:29 by jeonjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_arr *arr, int flag)
{
	int	temp;

	temp = arr->a[arr->a_top];
	arr->a[arr->a_top] = arr->a[arr->a_top - 1];
	arr->a[arr->a_top - 1] = temp;
	if (flag)
		write(1, "sa\n", 3);
}

void	sb(t_arr *arr, int flag)
{
	int	temp;

	temp = arr->b[arr->b_top];
	arr->b[arr->b_top] = arr->b[arr->b_top - 1];
	arr->b[arr->b_top - 1] = temp;
	if (flag)
		write(1, "sb\n", 3);
}

void	ss(t_arr *arr)
{
	sa(arr, 0);
	sb(arr, 0);
	write(1, "ss\n", 3);
}

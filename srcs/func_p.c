/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   func_p.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonjeon <jeonjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/27 20:35:32 by jeonjeon          #+#    #+#             */
/*   Updated: 2022/07/27 20:42:30 by jeonjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_arr *arr)
{
	if (arr->b_top >= 0)
	{
		++arr->a_top;
		arr->a[arr->a_top] = arr->b[arr->b_top];
		--arr->b_top;
		write(1, "pa\n", 3);
	}
}

void	pb(t_arr *arr)
{
	if (arr->a_top >= 0)
	{
		++arr->b_top;
		arr->b[arr->b_top] = arr->a[arr->a_top];
		--arr->a_top;
		write(1, "pb\n", 3);
	}
}

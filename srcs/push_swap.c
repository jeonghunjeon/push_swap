/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonjeon <jeonjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:53:42 by jeonjeon          #+#    #+#             */
/*   Updated: 2022/08/02 20:40:47 by jeonjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char *argv[])
{
	t_arr	arr;

	if (argc == 1)
		return (0);
	arr = (t_arr){0, 0, 0, 0, 0};
	mk_element(argv, argc, &arr);
	if (!check_sort_a(&arr, arr.size))
	{
		if (arr.a_top == 2)
			three_sort(&arr);
		else if (arr.a_top == 3)
			four_sort(&arr);
		else if (arr.a_top == 4)
			five_sort(&arr);
		else
			a_to_b(&arr, arr.size);
	}
	free(arr.a);
	free(arr.b);
	return (0);
}

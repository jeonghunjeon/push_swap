/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeonjeon <jeonjeon@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:51:30 by jeonjeon          #+#    #+#             */
/*   Updated: 2022/08/01 20:25:14 by jeonjeon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_arr
{
	int	*a;
	int	*b;
	int	size;
	int	a_top;
	int	b_top;
}			t_arr;

typedef struct s_pivot
{
	int	pivot_1;
	int	pivot_2;
}			t_pivot;

typedef struct s_count
{
	int	ra;
	int	rb;
	int	pa;
	int	pb;
}			t_count;

typedef struct s_split
{
	int			idx;
	int			top;
	int			split;
	size_t		cnt;
	char		*cpy;
	char		**ret;
}				t_split;

char		**ft_split(char const *s, char c);
void		ft_error(void);
int			ft_atoi(const char *nptr);
void		free_str(char **str);
void		*ft_memset(void *ptr, int value, int len);
void		mk_element(char **argv, int argc, t_arr *arr);
void		init_arr(t_arr *arr, int size);
void		pa(t_arr *arr);
void		pb(t_arr *arr);
void		ra(t_arr *arr, int flag);
void		rb(t_arr *arr, int flag);
void		rr(t_arr *arr);
void		rra(t_arr *arr, int flag);
void		rrb(t_arr *arr, int flag);
void		rrr(t_arr *arr);
void		sa(t_arr *arr, int flag);
void		sb(t_arr *arr, int flag);
void		ss(t_arr *arr);
void		ft_sort(int *copy, int size);
t_pivot		get_pivot(t_arr *arr, int size, int flag);
int			check_sort_a(t_arr *arr, int size);
int			check_sort_b(t_arr *arr, int size);
int			*copy_arr(t_arr *arr, int size, int flag);
void		three_sort(t_arr *arr);
void		four_sort(t_arr *arr);
void		five_sort(t_arr *arr);
void		small_sort_a(t_arr *arr, int size);
void		small_sort_b(t_arr *arr, int size);
void		a_to_b(t_arr *arr, int size);
void		b_to_a(t_arr *arr, int size);
void		a_to_b_sub(t_arr *arr, t_count *count, t_pivot pivot, int size);
void		b_to_a_sub(t_arr *arr, t_count *count, t_pivot pivot, int size);

#endif
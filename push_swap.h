/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajehle <ajehle@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 12:11:31 by ajehle            #+#    #+#             */
/*   Updated: 2024/02/02 11:36:28 by ajehle           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <limits.h>
# include <stdlib.h>
# include <unistd.h>

# include "./libs/ft_printf/ft_printf.h"
# include "./libs/libft/libft.h"

typedef struct s_data
{
	int		*a_stack;
	int		*b_stack;
	int		a_leng;
	int		b_leng;
	int		a_median;
	int		b_median;
	int		chunk[999];
	int		i;
	int		min;
}				t_data;

void	swap(int *stack, int len, char *s);
void	swap_ss(t_data *lst);

void	all_one_down(int *stack, int len);
void	all_one_up(int *stack, int len);

void	push_to_a(t_data *lst);
void	push_to_b(t_data *lst);

void	rotate(int *stack, int len, char *str);
void	rotate_rr(t_data *lst);

void	reverse_rotate(int *stack, int len, char *str);
void	reverse_rotate_rr(t_data *lst);

void	sorting_three(t_data *lst);
void	sorting_five(t_data *lst);

long	ft_atol(const char *str);
int		ft_isdigit(int c);

int		parse_input(int argc, char **argv);
int		check_for_dups(int *stack, int len);
int		check_for_nbrs(char *str);

t_data	*prep_mem(t_data *lst, int len);
void	set_free(t_data *lst, int argc, char **argv);

int		find_median(int *arr, int leng);
int		check_sort_lst_a(t_data *lst);
int		check_sort_lst_b(t_data *lst, int chunksize);
void	prep_forward(t_data *lst, int size, int rev_call);
void	prep_backward(t_data *lst, int size);
void	move_to_a(t_data *lst);
void	move_to_b(t_data *lst, int rev_call);

void	free_ptr(char **dptr);

#endif
#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "../libft/libft.h"

#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

typedef struct s_stack
{
    int				value;
	int				index;
	int				position;
	int				target_position;
	int				a_cost;
	int				b_cost;
	int				all_cost;
	struct s_stack	*next;
}   t_stack;

int ft_just_numbers(char *str);
int ft_strcmp(const char *s1, const char *s2);
int ft_has_sign(char c);
int ft_support_repeated_numbers(const char *s1, const char *s2);
int ft_repeated_numbers(char **argv);
int ft_input_checks(char **argv);
int ft_is_zero(char *argv);
void    ft_rotate_rr(t_stack **a_stack, t_stack **b_stack, int a, int b);
void    ft_reverse_rotate_rrr(t_stack **a_stack, t_stack **b_stack, int a, int b);
void    ft_move_stack_a(t_stack **a_stack, int curret_pos);
void    ft_move_stack_b(t_stack **b_stack, int current_pos);
void    ft_have_position(t_stack **stack);
void    ft_have_target_position(t_stack **a_stack, t_stack **b_stack);
void    ft_push(t_stack **src, t_stack **dest);
void    ft_make_push_a(t_stack **a_stack, t_stack **b_stack);
void    ft_make_push_b(t_stack **a_stack, t_stack **b_stack);
void    ft_rotate(t_stack **stack);
void    ft_make_rotate_a(t_stack **a_stack);
void    ft_make_rotate_b(t_stack **b_stack);
void    ft_make_rotate_a_and_b(t_stack **a_stack, t_stack **b_stack);
void    ft_rotate_reverse(t_stack **stack);
void    ft_make_reverse_rotate_a(t_stack **a_stack);
void    ft_make_reverse_rotate_b(t_stack **b_stack);
void    ft_make_reverse_rotate_a_and_b(t_stack **a_stack, t_stack **b_stack);
void    ft_swap(t_stack **stack);
void    ft_make_swap_a(t_stack **a_stack);
void    ft_make_swap_b(t_stack **b_stack);
void    ft_make_swap_a_and_b(t_stack **a_stack, t_stack **b_stack);
long int    ft_atol(const char *nptr);
int ft_sum_cost(int a, int b);
void    ft_free_stack(t_stack **stack);
void    ft_error_handler(t_stack **stack);
int ft_get_stack_size(t_stack *stack);
t_stack *ft_add_node(int nbr);
void    ft_add_node_at_end(t_stack **stack, t_stack *new);
t_stack *ft_get_list_last_element(t_stack *stack);
t_stack *ft_get_list_penultimate_element(t_stack *stack);
t_stack *ft_initial_stack(int argc, char **argv);
void    ft_assigning_indexes(t_stack *a_stack);
int ft_largest_index_value(t_stack *stack);
int ft_lowest_position(t_stack *stack);
int ft_indexes_average(t_stack *stack);
void    ft_get_cost(t_stack **a_stack, t_stack **b_stack);
void    ft_calc_cost_a(t_stack *a_stack);
void    ft_calc_cost_b(t_stack *b_stack);
void    ft_calc_total_cost(t_stack **a_stack, t_stack **b_stack);
int ft_get_cost_cheaper(t_stack **b_stack);
void    ft_push_to_stack_b(t_stack **a_stack, t_stack **b_stack);


#endif
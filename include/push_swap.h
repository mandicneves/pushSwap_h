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


#endif
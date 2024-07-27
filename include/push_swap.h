#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "libft/libft.h"

#include <unistd.h>
#include <limits.h>
#include <stdlib.h>

typedef struct s_stack
{
    int				value;
	int				index;
	int				pos;
	int				target_pos;
	int				cost_a;
	int				cost_b;
	int				total_cost;
	struct s_stack	*next;
}   t_stack;

int ft_just_numbers(char *str);
int ft_strcmp(const char *s1, const char *s2);
int ft_has_sign(char c);
int ft_support_repeated_numbers(const char *s1, const char *s2);
int ft_repeated_numbers(char **argv);
int ft_input_checks(char **argv);
int ft_is_zero(char *argv);


#endif
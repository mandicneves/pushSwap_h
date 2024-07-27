#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

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


#endif
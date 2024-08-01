#include "../include/push_swap.h"

void    ft_get_cost(t_stack **a_stack, t_stack **b_stack)
{
    ft_calc_cost_a(*a_stack);
    ft_calc_cost_b(*b_stack);
}
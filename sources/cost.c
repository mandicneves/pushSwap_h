#include "../include/push_swap.h"

void    ft_get_cost(t_stack **a_stack, t_stack **b_stack)
{
    ft_calc_cost_a(*a_stack);
    ft_calc_cost_b(*b_stack);
}

void    ft_calc_cost_a(t_stack *a_stack)
{
    t_stack *current_node;
    int stack_size;
    int middle;

    stack_size = ft_get_stack_size(a_stack);
    current_node = a_stack;
    middle = (stack_size + 1) / 2;
    while (current_node)
    {
        if (current_node->position <= middle)
            current_node->a_cost = current_node->position;
        else
            current_node->a_cost = (stack_size - current_node->position) * -1;
        current_node = current_node->next;
    }
}

void    ft_calc_cost_b(t_stack *b_stack)
{
    
}
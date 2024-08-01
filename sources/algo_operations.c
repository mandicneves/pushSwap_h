#include "../include/push_swap.h"

void    ft_get_best_operation(t_stack **a_stack, t_stack **b_stack)
{
    t_stack *current_node;
    int low_cost;

    current_node = *b_stack;
    low_cost = ft_get_cost_cheaper(b_stack);
    while (current_node)
    {
        if (current_node->all_cost == low_cost)
        {
            ft_moviments(a_stack, b_stack, current_node->target_position, current_node->position);
            return ;
        }
        current_node = current_node->next;
    }
}
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

void    ft_moviments(t_stack **a_stack, t_stack **b_stack, int target_position, int position)
{
    t_stack *a_current;
    t_stack *b_current;

    a_current = *a_stack;
    b_current = *b_stack;
    while (a_current->index != target_position)
        a_current = a_current->next;
    while (b_current->position != position)
        b_current = b_current->next;
    while (b_current)
    {
        if (a_current->a_cost > 0 && b_current->b_cost > 0)
            ft_rotate_rr(a_stack, b_stack, a_current->index, b_current->index);
        else if (a_current->a_cost < 0 && b_current->a_cost < 0)
            ft_reverse_rotate_rrr(a_stack, b_stack, a_current->index, a_current->index);
        ft_move_stack_a(a_stack, target_position);
        ft_move_stack_b(b_stack, position);
        if (a_current->a_cost == 0 && b_current->b_cost == 0)
            break;
    }
    ft_make_push_a(a_stack, b_stack);
}
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
    t_stack *current_node;
    int stack_size;
    int middle;

    stack_size = ft_get_stack_size(b_stack);
    current_node = b_stack;
    middle = (stack_size + 1) / 2;
    while (current_node)
    {
        if (current_node->position <= middle)
            current_node->b_cost = current_node->position;
        else
            current_node->b_cost = (stack_size - current_node->position) * -1;
        current_node = current_node->next;
    }
}

void    ft_calc_total_cost(t_stack **a_stack, t_stack **b_stack)
{
    t_stack *a_current;
    t_stack *b_current;

    a_current = *a_stack;
    while (a_current)
    {
        b_current = *b_stack;
        while (b_current)
        {
            if (b_current->target_position == a_current->index)
            {
                b_current->all_cost = ft_sum_cost(a_current->a_cost, b_current->b_cost);
            }
            b_current = b_current->next;
        }
        a_current = a_current->next;
    }
}

int ft_get_cost_cheaper(t_stack **b_stack)
{
    t_stack *current_node;
    int low_cost;

    current_node = *b_stack;
    low_cost = current_node->all_cost;
    while (current_node)
    {
        if (low_cost > current_node->all_cost)
            low_cost = current_node->all_cost;
        current_node = current_node->next;
    }
    return (low_cost);
}
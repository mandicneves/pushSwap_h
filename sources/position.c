#include "../include/push_swap.h"

void    ft_have_position(t_stack **stack)
{
    t_stack *temp;
    int i;

    temp = *stack;
    i = 0;
    while (temp)
    {
        temp->position = i;
        temp = temp->next;
        i++;
    }
}

void    ft_have_target_position(t_stack **a_stack, t_stack **b_stack)
{
    t_stack *current_a_node;
    t_stack *current_b_node;

    current_b_node = *b_stack;
    while (current_b_node)
    {
        current_a_node = *a_stack;
        current_b_node->target_position = INT_MAX;
        while (current_a_node)
        {
            if (current_b_node->index < current_a_node->index
                && current_a_node->index < current_b_node->target_position)
                {
                    current_b_node->target_position = current_a_node->index;
                }
                current_a_node = current_a_node->next;
        }
        current_b_node = current_b_node->next;
    }
}
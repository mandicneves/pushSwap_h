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
    t_stack *a_node;
    t_stack *b_node;

    b_node = *b_stack;
    while (b_node)
    {
        a_node = *a_stack;
        b_node->target_position = INT_MAX;
        while (a_node)
        {
            if (b_node->index < a_node->index
                && a_node->index < b_node->target_position)
                {
                    b_node->target_position = a_node->index;
                }
                a_node = a_node->next;
        }
        b_node = b_node->next;
    }
}
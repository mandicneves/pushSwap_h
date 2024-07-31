#include "../include/push_swap.h"

void    ft_rotate(t_stack **stack)
{
    t_stack *temp;
    t_stack *last;

    temp = *stack;
    *stack = (*stack)->next;
    last = ft_get_list_last_element(*stack);
    last->next = temp;
    temp->next = NULL;
}
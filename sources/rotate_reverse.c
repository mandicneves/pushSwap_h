#include "../include/push_swap.h"

void    ft_rotate_reverse(t_stack **stack)
{
    t_stack *temp;
    t_stack *last;
    t_stack *penultimate;

    last = ft_get_list_last_element(*stack);
    penultimate = ft_get_list_penultimate_element(*stack);
    temp = *stack;
    *stack = last;
    (*stack)->next = temp;
    penultimate->next = NULL;
}
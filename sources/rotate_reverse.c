#include "../include/push_swap.h"

void    ft_reverse_rotate(t_stack **stack)
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

void    ft_make_reverse_rotate_a(t_stack **a_stack)
{
    ft_reverse_rotate(a_stack);
    ft_putstr_fd("rra\n", 1);
}

void    ft_make_reverse_rotate_b(t_stack **b_stack)
{
    ft_reverse_rotate(b_stack);
    ft_putstr_fd("rrb\n", 1);
}
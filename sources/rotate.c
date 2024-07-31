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

void    ft_make_rotate_a(t_stack **a_stack)
{
    ft_rotate(a_stack);
    ft_putstr_fd("ra\n", 1);
}

void    ft_make_rotate_b(t_stack **b_stack)
{
    ft_rotate(b_stack);
    ft_putstr_fd("rb\n", 1);
}
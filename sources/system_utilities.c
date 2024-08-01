#include "../include/push_swap.h"

void    ft_free_stack(t_stack **stack)
{
    t_stack *temp;

    if (!stack || !(*stack))
        return ;
    temp = *stack;
    while (*stack)
    {
        temp = (*stack)->next;
        free(*stack);
        *stack = temp;
    }
}

void    ft_error_handler(t_stack **stack)
{
    ft_free_stack(stack);
    ft_putstr_fd("Error\n", 2);
    exit(1);
}
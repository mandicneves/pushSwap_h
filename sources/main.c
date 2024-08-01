#include "../include/push_swap.h"

int ft_is_sorted(t_stack *stack)
{
    while (stack->next != NULL)
    {
        if (stack->value > stack->next->value)
            return (1);
        stack = stack->next;
    }
    return (0);
}

void    ft_push_swap(t_stack **a_stack, t_stack **b_stack, int stack_size)
{
    *b_stack = NULL;
    if (stack_size == 2)
        ft_make_swap_a(a_stack);
    else if (stack_size == 3)
        ft_sort_small(a_stack);
    else if (stack_size > 3)
        ft_sort(a_stack, b_stack);
}
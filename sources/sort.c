#include "../include/push_swap.h"

void    ft_push_to_stack_b(t_stack **a_stack, t_stack **b_stack)
{
    int stack_size;
    int middle;

    stack_size = ft_get_stack_size(*a_stack);
    while (stack_size > 3)
    {
        stack_size = ft_get_stack_size(*a_stack);
        middle = ft_indexes_average(*a_stack);
        if (stack_size == 3)
            break;
        if ((*a_stack)->index <= middle)
            ft_make_push_b(a_stack, b_stack);
        else
            ft_make_rotate_a(a_stack);
    }
}
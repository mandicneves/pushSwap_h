#include "../include/push_swap.h"

int ft_get_stack_size(t_stack *stack)
{
    int size;

    size = 0;
    if (!stack)
        return (0);
    while (stack)
    {
        stack = stack->next;
        size++;
    }
    return (size);
}
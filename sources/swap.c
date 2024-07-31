#include "../include/push_swap.h"

void    ft_swap(t_stack **stack)
{
    t_stack *top;
    t_stack *second;

    if (!stack || !(*stack)->next)
        return ;
    top = *stack;
    second = (*stack)->next;
    top->next = second->next;
    second->next = top;
    *stack = second;
}
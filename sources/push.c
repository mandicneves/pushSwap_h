#include "../include/push_swap.h"

void    ft_push(t_stack **src, t_stack **dest)
{
    t_stack *temp;

    if (*src == NULL || src == NULL)
        return ;
    temp = *src;
    *src = (*src)->next;
    temp->next = *dest;
    *dest = temp;
}

void    ft_make_push_a(t_stack **a_stack, t_stack **b_stack)
{
    ft_push(b_stack, a_stack);
    ft_putstr_fd("pa\n", 1);
}
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
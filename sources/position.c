#include "../include/push_swap.h"

void    ft_have_position(t_stack **stack)
{
    t_stack *temp;
    int i;

    temp = *stack;
    i = 0;
    while (temp)
    {
        temp->position = i;
        temp = temp->next;
        i++;
    }
}
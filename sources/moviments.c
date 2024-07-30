#include "../include/push_swap.h"

void    ft_rotate_rr(t_stack **a_stack, t_stack **b_stack, int a, int b)
{
    t_stack *flow;

    flow = *a_stack;
    while (flow && flow->index != a)
        flow = flow->next;
    flow->a_cost--;
    flow = *b_stack;
    while (flow && flow->index != b)
        flow = flow->next;
    flow->b_cost--;
    ft_make_rr(a_stack, b_stack);
}
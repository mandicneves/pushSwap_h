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

void    ft_reverse_rotate_rrr(t_stack **a_stack, t_stack **b_stack, int a, int b)
{
    t_stack *flow;

    flow = *a_stack;
    while (flow && flow->index != a)
        flow = flow->next;
    flow->a_cost++;
    flow = *b_stack;
    while (flow && flow->index != b)
        flow = flow->next;
    flow->b_cost++;
    ft_make_rrr(a_stack, b_stack);
}

void    ft_move_stack_a(t_stack **a_stack, int curret_pos)
{
    t_stack *flow;

    flow = *a_stack;
    while (flow)
    {
        if (flow->index == curret_pos)
        {
            while (flow->a_cost != 0)
            {
                if (flow->a_cost > 0)
                {
                    ft_make_rotate_a(a_stack);
                    flow->a_cost--;
                }
                if (flow->a_cost < 0)
                {
                    ft_make_reverse_rotate_a(a_stack);
                    flow->a_cost++;
                }
            }
            return ;
        }
        flow = flow->next;
    }
}

void    ft_move_stack_b(t_stack **b_stack, int )
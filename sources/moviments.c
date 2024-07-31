#include "../include/push_swap.h"

void    ft_rotate_rr(t_stack **a_stack, t_stack **b_stack, int a, int b)
{
    t_stack *node;

    node = *a_stack;
    while (node && node->index != a)
        node = node->next;
    node->a_cost--;
    node = *b_stack;
    while (node && node->index != b)
        node = node->next;
    node->b_cost--;
    ft_make_rr(a_stack, b_stack);
}

void    ft_reverse_rotate_rrr(t_stack **a_stack, t_stack **b_stack, int a, int b)
{
    t_stack *node;

    node = *a_stack;
    while (node && node->index != a)
        node = node->next;
    node->a_cost++;
    node = *b_stack;
    while (node && node->index != b)
        node = node->next;
    node->b_cost++;
    ft_make_rrr(a_stack, b_stack);
}

void    ft_move_stack_a(t_stack **a_stack, int curret_pos)
{
    t_stack *node;

    node = *a_stack;
    while (node)
    {
        if (node->index == curret_pos)
        {
            while (node->a_cost != 0)
            {
                if (node->a_cost > 0)
                {
                    ft_make_rotate_a(a_stack);
                    node->a_cost--;
                }
                if (node->a_cost < 0)
                {
                    ft_make_reverse_rotate_a(a_stack);
                    node->a_cost++;
                }
            }
            return ;
        }
        node = node->next;
    }
}

void    ft_move_stack_b(t_stack **b_stack, int current_pos)
{
    t_stack *node;

    node = *b_stack;
    while (node)
    {
        if (node->position == current_pos)
        {
            while (node->b_cost != 0)
            {
                if (node->b_cost > 0)
                {
                    ft_make_rotate_b(b_stack);
                    node->b_cost--;
                }
                if (node->b_cost < 0)
                {
                    ft_make_reverse_rotate_b(b_stack);
                    node->b_cost++;
                }
            }
            return ;
        }
        node = node->next;
    }
}
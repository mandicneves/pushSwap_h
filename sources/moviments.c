#include "../include/push_swap.h"

void    ft_rotate_rr(t_stack **a_stack, t_stack **b_stack, int a, int b)
{
    t_stack *current_node;

    current_node = *a_stack;
    while (current_node && current_node->index != a)
        current_node = current_node->next;
    current_node->a_cost--;
    current_node = *b_stack;
    while (current_node && current_node->index != b)
        current_node = current_node->next;
    current_node->b_cost--;
    ft_make_rotate_a_and_b(a_stack, b_stack);
}

void    ft_reverse_rotate_rrr(t_stack **a_stack, t_stack **b_stack, int a, int b)
{
    t_stack *current_node;

    current_node = *a_stack;
    while (current_node && current_node->index != a)
        current_node = current_node->next;
    current_node->a_cost++;
    current_node = *b_stack;
    while (current_node && current_node->index != b)
        current_node = current_node->next;
    current_node->b_cost++;
    ft_make_reverse_rotate_a_and_b(a_stack, b_stack);
}

void    ft_move_stack_a(t_stack **a_stack, int curret_pos)
{
    t_stack *current_node;

    current_node = *a_stack;
    while (current_node)
    {
        if (current_node->index == curret_pos)
        {
            while (current_node->a_cost != 0)
            {
                if (current_node->a_cost > 0)
                {
                    ft_make_rotate_a(a_stack);
                    current_node->a_cost--;
                }
                if (current_node->a_cost < 0)
                {
                    ft_make_reverse_rotate_a(a_stack);
                    current_node->a_cost++;
                }
            }
            return ;
        }
        current_node = current_node->next;
    }
}

void    ft_move_stack_b(t_stack **b_stack, int current_pos)
{
    t_stack *current_node;

    current_node = *b_stack;
    while (current_node)
    {
        if (current_node->position == current_pos)
        {
            while (current_node->b_cost != 0)
            {
                if (current_node->b_cost > 0)
                {
                    ft_make_rotate_b(b_stack);
                    current_node->b_cost--;
                }
                if (current_node->b_cost < 0)
                {
                    ft_make_reverse_rotate_b(b_stack);
                    current_node->b_cost++;
                }
            }
            return ;
        }
        current_node = current_node->next;
    }
}
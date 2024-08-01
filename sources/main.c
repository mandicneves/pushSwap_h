#include "../include/push_swap.h"

int ft_is_sorted(t_stack *stack)
{
    while (stack->next != NULL)
    {
        if (stack->value > stack->next->value)
            return (1);
        stack = stack->next;
    }
    return (0);
}

void    ft_push_swap(t_stack **a_stack, t_stack **b_stack, int stack_size)
{
    *b_stack = NULL;
    if (stack_size == 2)
        ft_make_swap_a(a_stack);
    else if (stack_size == 3)
        ft_sort_small(a_stack);
    else if (stack_size > 3)
        ft_sort(a_stack, b_stack);
}

int main(int argc, char **argv)
{
    t_stack *a_stack;
    t_stack *b_stack;
    int stack_size;

    b_stack = NULL;
    if (argc == 1)
        return (1);
    if (ft_input_checks(argv) == 1)
    {
        ft_putstr_fd("Error\n", 2);
        exit(1);
    }
    a_stack = ft_initial_stack(argc, argv);
    stack_size = ft_get_stack_size(a_stack);
    ft_assigning_indexes(a_stack);
    if (ft_is_sorted(a_stack) == 1)
        ft_push_swap(&a_stack, &b_stack, stack_size);
    ft_free_stack(&a_stack);
    ft_free_stack(&b_stack);
    return (0);
}
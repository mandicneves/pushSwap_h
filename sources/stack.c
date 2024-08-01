#include "../include/push_swap.h"

t_stack *ft_initial_stack(int argc, char **argv)
{
    t_stack *a_stack;
    int i;
    long nbr;

    a_stack = NULL;
    i = 1;
    while (i < argc)
    {
        nbr = ft_atol(argv[i]);
        if (!(nbr > INT_MIN && nbr < INT_MAX))
            ft_error_handler(&a_stack);
        if (i == 1)
            a_stack = ft_add_node((int)nbr);
        else
            ft_add_node_at_end(&a_stack, ft_add_node((int)nbr));
        i++;
    }
    return (a_stack);
}

void    ft_assigning_indexes(t_stack *a_stack)
{
    t_stack *current_node;
    t_stack *current_comparator;

    current_node = a_stack;
    while (current_node)
    {
        current_comparator = a_stack;
        while (current_comparator)
        {
            if (current_comparator->value < current_node->value)
                current_node->index++;
            current_comparator = current_comparator->next;
        }
        current_node = current_node->next;
    }
}

int ft_largest_index_value(t_stack *stack)
{
    int index;

    index = stack->index;
    while (stack)
    {
        if (index < stack->index)
            index = stack->index;
        stack = stack->next;
    }
    return (index);
}

int ft_lowest_position(t_stack *stack)
{
    int index;
    int min_position;

    index = stack->index;
    while (stack)
    {
        if (index > stack->index)
        {
            min_position = stack->position;
            index = stack->index;
        }
        stack = stack->next;
    }
    return (min_position);
}

int ft_indexes_average(t_stack *stack)
{
    int result;
    int stack_size;

    result = 0;
    stack_size = ft_get_stack_size(stack);
    while (stack)
    {
        result += stack->index;
        stack = stack->next;
    }
    return (result / stack_size);
}
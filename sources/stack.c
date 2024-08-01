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
    t_stack *node;
    t_stack *comparator;

    node = a_stack;
    while (node)
    {
        comparator = a_stack;
        while (comparator)
        {
            if (comparator->value < node->value)
                node->index++;
            comparator = comparator->next;
        }
        node = node->next;
    }
}
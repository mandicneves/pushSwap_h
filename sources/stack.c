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
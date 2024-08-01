#include "../include/push_swap.h"

int ft_get_stack_size(t_stack *stack)
{
    int size;

    size = 0;
    if (!stack)
        return (0);
    while (stack)
    {
        stack = stack->next;
        size++;
    }
    return (size);
}

t_stack *ft_add_node(int nbr)
{
    t_stack *new_node;

    new_node = malloc(sizeof * new_node);
    if (!new_node)
        return (NULL);
    new_node->value = nbr;
    new_node->index = 1;
    new_node->position = 0;
    new_node->target_position = 0;
    new_node->a_cost = 0;
    new_node->b_cost = 0;
    new_node->all_cost = 0;
    new_node->next = NULL;
    return (new_node);
}

void    ft_add_node_at_end(t_stack **stack, t_stack *new)
{
    t_stack *temp;

    temp = NULL;
    if (!new)
        return ;
    if (!*stack)
    {
        *stack = new;
        return ;
    }
    temp = ft_get_list_last_element(*stack);
    temp->next = new;
}

t_stack *ft_get_list_last_element(t_stack *stack)
{
    while (stack && stack->next != NULL)
        stack = stack->next;
    return (stack);
}

t_stack *ft_get_list_penultimate_element(t_stack *stack)
{
    while (stack && stack->next && stack->next->next != NULL)
        stack = stack->next;
    return (stack);
}
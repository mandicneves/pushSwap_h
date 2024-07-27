#include "include/push_swap.h"

int ft_just_numbers(char *str)
{
    int i;

    i = 0;
    while (str[i])
    {
        if (!(str[i] == '+' || str[i] == '-'
        || (str[i] >= '0' && str[i] <= '9')
        || str[i] == 32))
            return (1);
        if ((str[i] == '-' || str[i] == '+')
        && (!(str[i + 1] >= '0' && str[i + 1] <= '9')))
            return (1);
        i++;
    }
    return (0);
}
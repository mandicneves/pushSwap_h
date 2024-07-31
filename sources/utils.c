#include "../include/push_swap.h"

long int    ft_atol(const char *nptr)
{
    int i;
    long result;
    int sign;

    i = 0;
    result = 0;
    sign = 1;
    while (nptr[i] == ' ' || nptr[i] == '\n' || nptr[i] == '\t'
        || nptr[i] == '\v' || nptr[i] == '\f' || nptr[i] == '\r')
        {
            i++;
        }
    if (nptr[i] == '-')
    {
        sign = -1;
        i++;
    }
    else if (nptr[i] == '+')
        i++;
    while (nptr[i] >= '0' && nptr[i] <= '9')
    {
        result = result * 10 + (nptr[i] - '0');
        i++;
    }
    return (result * sign);
}
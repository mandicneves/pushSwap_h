#include "include/push_swap.h"

int ft_has_sign(char c)
{
    return (c == '+' || c == '-');
}

int ft_strcmp(const char *s1, const char *s2)
{
    int i = 0;

    while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
        i++;
    return (s1[i] - s2[i]);
}
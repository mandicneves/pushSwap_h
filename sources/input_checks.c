#include "include/push_swap.h"

int ft_just_numbers(char *argv)
{
    int i;

    i = 0;
    if (ft_has_sign(argv[i]) && argv[i + 1])
        i++;
    while (argv[i] && ft_isdigit(argv[i]))
        i++;
    if (argv[i] && !ft_isdigit(argv[i]))
        return (0);
    return (1);
}

int ft_repeated_numbers(char **argv)
{
    int i;
    int j;

    i = 0;
    while (argv[i])
    {
        j = 0;
        while (argv[j])
        {
            if (j != i && ft_support_repeated_numbers(argv[i], argv[j]) == 0)
                return (1);
            j++;
        }
        i++;
    }
    return (0);
}

int ft_support_repeated_numbers(const char *s1, const char *s2)
{
    if (s1[0] == '+' && s2[0] != '+')
        s1++;
    else if (s1[0] != '+' && s2[0] == '+')
        s2++;
    return (ft_strcmp(s1, s2));
}

int ft_is_zero(char *argv)
{
    int i;

    i = 0;
    if (ft_has_sign(argv[i]))
        i++;
    while (argv[i] && argv[i] == '0')
        i++;
    if (argv[i])
        return (0);
    return (1);
}


#include "../include/push_swap.h"

int	ft_just_numbers(char *str)
{
	int	i;

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

int	ft_repeated_numbers(char **argv)
{
	int	i;
	int	j;

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
    	int	i;
	int	j;

	i = 0;
	j = i;
	if (s1[i] == '+')
	{
		if (s2[j] != '+')
			i++;
	}
	else
	{
		if (s2[j] == '+')
			j++;
	}
	while (s1[i] != '\0' && s2[j] != '\0' && s1[i] == s2[j])
	{
		i++;
		j++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[j]);
}

int	ft_is_zero(char *argv)
{
	int	i;

	i = 0;
	if (argv[i] == '+' || argv[i] == '-')
		i++;
	while (argv[i] && argv[i] == '0')
		i++;
	if (argv[i] != '\0')
		return (0);
	return (1);
}

int	ft_input_checks(char **argv)
{
	int	i;
	int	num_zero;

	i = 1;
	num_zero = 0;
	while (argv[i])
	{
		if (!argv[i][0])
			return (1);
		if (ft_just_numbers(argv[i]) == 1)
			return (1);
		if (ft_repeated_numbers(&argv[i]) == 1)
			return (1);
		num_zero += ft_is_zero(argv[i]);
		i++;
	}
	if (num_zero > 1)
		return (1);
	return (0);
}
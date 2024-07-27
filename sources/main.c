#include "../include/push_swap.h"

int main(int argc, char **argv)
{
    if (argc == 1)
		return (1);
	if (correct_input(argv) == 1)
	{
		ft_putstr_fd("Error\n", 2);
		exit(1);
	}
    return (0);
}
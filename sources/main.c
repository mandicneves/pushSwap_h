#include "../include/push_swap.h"

int main(int argc, char **argv)
{
    if (argc == 1)
		return (1);
	if (ft_input_checks(argv))
        ft_putendl_fd("ok", 1);
    return (0);
}
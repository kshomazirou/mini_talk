#include "mini_talk.h"

void	bit_echo(int sig)
{
	static int	bit;
	static int	i;

	if (sig == SIGUSR1)
		i |= (0x01 << bit);
	bit++;
	if (bit == 8)
	{
		ft_printf("%c", i);
		bit = 0;
		i = 0;
	}
}

int	main(int argc, char *argv[])
{
	int	pid;

	(void)argv;
	if (argc != 1)
	{
		write(1, "Please input: ./server \n", 24);
		return (0);
	}
	pid = getpid();
	ft_printf("Please input: %d\n", pid);
	while (argc == 1)
	{
		signal(SIGUSR1, bit_echo);
		signal(SIGUSR2, bit_echo);
		pause();
	}
	return (0);
}

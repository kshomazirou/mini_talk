#include "mini_talk_bonus.h"

void	ft_confirm(int signal)
{
	if (signal == SIGUSR2)
		write(1, "connected with SIGUSR1!!!\n", 26);	
	else
		write(1, "Unexpected signal received\n", 28);
}

void	ft_send_bits(int pid, char i)
{
	int	bit;

	bit  = 0;
	while (bit < 8)
	{
		if ((i & (0x01 << bit)) != 0)
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(500);
		bit++;
	}
}

int	main(int argc, char *argv[])
{
	int	pid;
	int	i;

	i = 0;
	if (argc == 3)
	{
		pid = ft_atoi(argv[1]);
		while (argv[2][i] != '\0')
		{
			signal(SIGUSR1, ft_confirm);
			signal(SIGUSR2, ft_confirm);
			ft_send_bits(pid, argv[2][i]);
			i++;
		}
		ft_send_bits(pid, '\n');

	}
	else
	{
		write(1, "./client_bonus [PID] [MESSAGE]\n", 31);
		return (1);
	}
	return (0);
}

#include "mini_talk_bonus.h"
#include <stdio.h>

void	ft_handler(int signal, siginfo_t *info, void *s)
{
	static int	bit;
	static int	i;

	(void)	info;
	(void)	s;
	if (signal == SIGUSR1)
		i |= (0x01 << bit);
	bit++;
	if (bit == 8)
	{
		ft_printf("%c", i);
		kill(info->si_pid, SIGUSR2);
		bit = 0;
		i = 0;
	}
	
}

int	main(int argc, char *argv[])
{
	int			pid;
	struct sigaction	sig;

	(void)argv;
	if (argc != 1)
	{
		write(1, "Please input: ./server \n", 24);
		return (0);
	}
	pid = getpid();
	ft_printf("Please input: %d\n", pid);
	sig.sa_sigaction = ft_handler;
	sigemptyset(&sig.sa_mask);
	sig.sa_flags = 0;
	while (argc == 1)
	{
		sigaction(SIGUSR1, &sig, NULL);
		sigaction(SIGUSR2, &sig, NULL);
		pause();
	}
	return (0);
}

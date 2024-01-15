NAME =  
CNAME = client
SNAME = server
BONUS_CNAME = client_bonus
BONUS_SNAME = server_bonus

CSRCS = ./client.c \
	./src/printf/libft/ft_atoi.c \

BONUS_CSRCS = ./client_bonus.c \
	./src/printf/libft/ft_atoi.c \

SSRCS = ./server.c \
	./src/printf/ft_printf.c \
	./src/printf/ft_change_base.c \
	./src/printf/ft_hexer.c \
	./src/printf/ft_inter.c \
	./src/printf/ft_pointer.c \
	./src/printf/ft_putputstr_fd.c \
	./src/printf/ft_putstr_count.c \
	./src/printf/ft_tolower.c \
	./src/printf/ft_putputchar_fd.c \
	./src/printf/ft_uber_count.c \
	./src/printf/ft_operator.c \
	./src/printf/libft/ft_calloc.c \
	./src/printf/libft/ft_itoa.c \
	./src/printf/libft/ft_putchar_fd.c \
	./src/printf/libft/ft_putstr_fd.c \
	./src/printf/libft/ft_strdup.c \
	./src/printf/libft/ft_strlen.c \
	./src/printf/libft/ft_tolower.c \
	./src/printf/libft/ft_bzero.c \
	./src/printf/libft/ft_memset.c \

BONUS_SSRCS = ./server_bonus.c \
	./src/printf/ft_printf.c \
	./src/printf/ft_change_base.c \
	./src/printf/ft_hexer.c \
	./src/printf/ft_inter.c \
	./src/printf/ft_pointer.c \
	./src/printf/ft_putputstr_fd.c \
	./src/printf/ft_putstr_count.c \
	./src/printf/ft_tolower.c \
	./src/printf/ft_putputchar_fd.c \
	./src/printf/ft_uber_count.c \
	./src/printf/ft_operator.c \
	./src/printf/libft/ft_calloc.c \
	./src/printf/libft/ft_itoa.c \
	./src/printf/libft/ft_putchar_fd.c \
	./src/printf/libft/ft_putstr_fd.c \
	./src/printf/libft/ft_strdup.c \
	./src/printf/libft/ft_strlen.c \
	./src/printf/libft/ft_tolower.c \
	./src/printf/libft/ft_bzero.c \
	./src/printf/libft/ft_memset.c \

COBJS = $(CSRCS:.c=.o)
B_COBJS = $(BONUS_CSRCS:.c=.o)
SOBJS = $(SSRCS:.c=.o)
B_SOBJS = $(BONUS_SSRCS:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

.c.o:
	$(CC) $(CFLAGS) -g -c $< -o $(<:.c=.o)

all: $(CNAME) $(SNAME)

$(CNAME): $(COBJS)
	$(CC) $(CFLAGS) -o $(CNAME) $(COBJS)

$(SNAME): $(SOBJS)
	$(CC) $(CFLAGS) -o $(SNAME) $(SOBJS)

bonus:  $(BONUS_CNAME) $(BONUS_SNAME)

all_bonus: bonus

$(BONUS_CNAME): $(B_COBJS)
	$(CC) $(CFLAGS) -o $(BONUS_CNAME) $(B_COBJS)

$(BONUS_SNAME): $(B_SOBJS)
	$(CC) $(CFLAGS) -o $(BONUS_SNAME) $(B_SOBJS)

clean:
	rm -f $(COBJS) $(SOBJS)

clean_bonus:
	rm -f $(B_COBJS) $(B_SOBJS)

fclean: clean
	rm -f $(CNAME) $(SNAME)

fclean_bonus: clean_bonus
	rm -f $(BONUS_CNAME) $(BONUS_SNAME)

re: fclean all

re_bonus: fclean_bonus all_bonus

.PHONY: all all_bonus clean clean_bonus fclean fclean_bonus re  re_bonus bonus


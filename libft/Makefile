# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mlubisi <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/14 15:37:15 by mlubisi           #+#    #+#              #
#    Updated: 2016/11/17 13:53:44 by mlubisi          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS = strs/ft_strlen.c \
       strs/ft_strcmp.c \
       strs/ft_strncmp.c \
       strs/ft_strcat.c \
       strs/ft_strlcat.c \
       strs/ft_strncat.c \
       strs/ft_strdup.c \
       strs/ft_strcpy.c \
       strs/ft_strncpy.c \
       strs/ft_strrev.c \
       strs/ft_strstr.c \
       strs/ft_strnstr.c \
       strs/ft_strclr.c \
       strs/ft_strchr.c \
       strs/ft_strrchr.c \
       strs/ft_strnew.c \
       strs/ft_strdel.c \
       strs/ft_striter.c \
       strs/ft_striteri.c \
       strs/ft_strjoin.c \
       strs/ft_strsplit.c \
       strs/ft_strtrim.c \
       strs/ft_strmap.c \
       strs/ft_strmapi.c \
       strs/ft_strequ.c \
       strs/ft_strnequ.c \
       strs/ft_strsub.c \
       ft_lst/ft_lstadd.c \
       ft_lst/ft_lstdel.c \
       ft_lst/ft_lstdelone.c \
       ft_lst/ft_lstiter.c\
       ft_lst/ft_lstlen.c \
       ft_lst/ft_lstmap.c \
       ft_lst/ft_lstnew.c \
       ft_lst/ft_lstpush.c \
       ft_lst/ft_lstpushback.c \
       ft_lst/ft_lstrev.c \
       ft_is/ft_isspace.c \
       ft_is/ft_isblank.c \
       ft_is/ft_isprint.c \
       ft_is/ft_isdigit.c \
       ft_is/ft_isalpha.c \
       ft_is/ft_isalnum.c \
       ft_is/ft_isascii.c \
       ft_is/ft_islower.c \
       ft_is/ft_isupper.c \
       ft_mem/ft_memcpy.c \
       ft_mem/ft_memccpy.c \
       ft_mem/ft_memmove.c \
       ft_mem/ft_memcmp.c \
       ft_mem/ft_memchr.c \
       ft_mem/ft_memalloc.c\
       ft_mem/ft_memdel.c \
       ft_mem/ft_memset.c \
       ft_mem/ft_memdel.c \
       tools/ft_bzero.c \
       tools/ft_abs.c \
       tools/ft_atoi.c \
       tools/ft_itoa.c \
       tools/ft_pow.c \
       tools/ft_sqrt.c \
       tools/ft_tabfree.c \
       tools/ft_tablen.c \
       tools/ft_tolower.c \
       tools/ft_toupper.c \
	   print/ft_putchar.c \
	   print/ft_putchar_fd.c \
	   print/ft_putstr.c \
	   print/ft_putstr_fd.c \
	   print/ft_putnbr.c \
	   print/ft_putnbr_fd.c \
	   print/ft_putendl.c \
	   print/ft_putendl_fd.c

NAME = libft.a
GCC_FLAGS = -Wall -Werror -Wextra
CC = gcc $(GCC_FLAGS)
SRCDIR = ./
OBJDIR = ./
AR = ar -cq
RM = rm -rf
OBJS = $(addprefix $(OBJDIR)/, $(SRCS:.c=.o))

all: $(NAME)

$(NAME): $(OBJS)
	@$(AR) $@ $^
	@ranlib $@
	@echo "\n   >>$@<<\n   Complete...\n"

$(addprefix $(OBJDIR)/, %.o): $(addprefix $(SRCDIR)/, %.c)
	@mkdir -p $(OBJDIR)
	@$(CC) -I. -o $@ -c $^
	@echo ">$^<"

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(LIBA)
	@$(RM) -f $(NAME)

re: fclean all

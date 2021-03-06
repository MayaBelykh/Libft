# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccolemon <ccolemon@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/28 22:10:48 by ccolemon          #+#    #+#              #
#    Updated: 2019/06/03 19:20:55 by ccolemon         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCE =	ft_atoi.c ft_atoi_base.c ft_bzero.c ft_countchars.c ft_countwords.c ft_fstrcpy.c \
			ft_get_sign.c ft_isalnum.c ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
			ft_itoa.c ft_ldtoa_base.c ft_lstadd.c ft_lstclear.c ft_lstdel.c ft_lstdelone.c \
			ft_lstiter.c ft_lstlast.c ft_lstlen.c ft_lstmap.c ft_lstnew.c ft_ltoa_base.c \
			ft_masnew.c ft_max.c ft_memalloc.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c \
			ft_memdel.c ft_memmove.c ft_memset.c ft_memset_n.c ft_numlen.c ft_pow.c ft_printf.c \
			ft_putchar.c ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c \
			ft_putstr.c ft_putstr_fd.c ft_strachrdup.c ft_strcat.c ft_strchr.c ft_strclr.c \
			ft_strcmp.c ft_strcpy.c ft_strdel.c ft_strdup.c ft_strequ.c ft_striter.c ft_striteri.c \
			ft_strjoin.c ft_strjoin_space.c ft_strlcat.c ft_strlen.c ft_strmap.c ft_strmapi.c \
			ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strndup.c ft_strnequ.c ft_strnew.c \
			ft_strnstr.c ft_strrchr.c ft_strset.c ft_strsplit.c ft_strstr.c ft_strstr_num.c \
			ft_strsub.c ft_strtrim.c ft_strtrimchr.c ft_struchrdup.c ft_swap.c ft_tolower.c \
			ft_tolower_str.c ft_toupper.c ft_toupper_str.c ft_ultoa_base.c funfree.c get_fstr.c \
			get_next_line.c get_str.c p_char.c p_dec.c p_errtype.c p_float.c p_hex.c p_octal.c \
			p_percent.c p_pointer.c p_str.c p_unsigned_int.c printf_format_parcer.c printf_free.c \
			printf_output.c printf_parcer.c 


OBJ = $(SOURCE:.c=.o)

FLAGS = -Wall -Wextra -Werror

%.o : %.c
	@gcc $(FLAGS) -c $^

all: $(NAME)

$(NAME): $(OBJ)
	@gcc $(FLAGS) -c $(SOURCE) libft.h
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

del:
	@rm -f *.o
	@find . \( -iname "*.gch" -o -iname ".DS_STORE" -o -iname ".vscode" -o -iname "*.dSYM" \) -delete
	@find . \( -iname ".git" \) -mindepth 2 -exec rm -rf {} \;
	@xattr -rc .

fdel: del
	@rm -f $(NAME)

redel: re del

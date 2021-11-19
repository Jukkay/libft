
NAME= tests

FNAMES= ft_strlen ft_isalpha ft_isdigit ft_isalnum ft_isascii ft_isprint ft_toupper ft_tolower ft_memchr ft_strchr ft_strrchr ft_bzero \
ft_memcpy ft_strcpy ft_strcat ft_strcmp ft_strstr ft_memmove ft_memcmp ft_strlcat ft_strdup ft_atoi ft_memccpy ft_strnstr ft_strncmp \
ft_strncpy ft_strncat ft_memalloc ft_putchar ft_putstr ft_putendl ft_putnbr ft_strnew ft_strdel ft_strclr ft_strequ ft_strnequ ft_strsub \
ft_strjoin ft_putchar_fd ft_putstr_fd ft_putendl_fd ft_putnbr_fd ft_memdel ft_striter ft_striteri ft_strmap ft_strmapi ft_strtrim \
ft_strsplit ft_itoa ft_lstnew ft_lstdelone ft_lstdel ft_lstadd ft_lstiter ft_lstmap

MAINS= strlen.test isalpha.test isdigit.test isalnum.test isascii.test isprint.test toupper.test tolower.test memchr.test \
strchr.test strrchr.test bzero.test memcpy.test strcpy.test strcat.test strcmp.test strstr.test memmove.test memcmp.test strlcat \
strdup.tets atoi.test memccpy.test strnstr.test strncmp.test strncpy.test strncat.test memalloc.test putchar.test putstr.test putendl.test \
putnbr.test strnew.test strdel.test strclr.test strequ.test strnequ.test strsub.test strjoin.test putcharfd.test putstrfd.test putendlfd.test \
putnbrfd.test memdel.test striter.test striteri.test strmap.test strmapi.test strtrim.test strsplit.test itoa.test

SRCS= ../ft_memset.c ../ft_bzero.c ../ft_memcpy.c ../ft_memccpy.c ../ft_memmove.c ../ft_memchr.c ../ft_memcmp.c ../ft_strlen.c ../ft_strdup.c \
../ft_strcpy.c ../ft_strncpy.c ../ft_strcat.c ../ft_strncat.c ../ft_strlcat.c ../ft_strchr.c ../ft_strrchr.c ../ft_strstr.c ../ft_strnstr.c ../ft_strcmp.c \
../ft_strncmp.c ../ft_atoi.c ../ft_isalpha.c ../ft_isdigit.c ../ft_isalnum.c ../ft_isascii.c ../ft_isprint.c ../ft_toupper.c ../ft_tolower.c \
../ft_memalloc.c ../ft_memdel.c ../ft_strnew.c ../ft_strdel.c ../ft_strclr.c ../ft_striter.c ../ft_striteri.c ../ft_strmap.c ../ft_strmapi.c \
../ft_strequ.c ../ft_strnequ.c ../ft_strsub.c ../ft_strjoin.c ../ft_strtrim.c ../ft_strsplit.c ../ft_itoa.c ../ft_putchar.c ../ft_putstr.c ../ft_putendl.c \
../ft_putnbr.c ../ft_putchar_fd.c ../ft_putstr_fd.c ../ft_putendl_fd.c ../ft_putnbr_fd.c 


.PHONY: all clean fclean re

all: ${FNAMES}

clean:
	rm -f *.o

fclean: clean
	rm -f ${FNAMES} a.out

re: fclean all

ft_strlen:
	gcc -Wall -Wextra -Werror -L../ -lft ../ft_strlen.c -x c strlen.test -o ft_strlen

ft_isalpha:
	gcc -Wall -Wextra -Werror -L../ -lft ../ft_isalpha.c -x c isalpha.test -o ft_isalpha

ft_isdigit:
	gcc -Wall -Wextra -Werror -L../ -lft ../ft_isdigit.c -x c isdigit.test -o ft_isdigit

ft_isalnum:
	gcc -Wall -Wextra -Werror -L../ -lft ../ft_isalnum.c -x c isalnum.test -o ft_isalnum

ft_isascii:
	gcc -Wall -Wextra -Werror -L../ -lft ../ft_isascii.c -x c isascii.test -o ft_isascii

ft_isprint:
	gcc -Wall -Wextra -Werror -L../ -lft ../ft_isprint.c -x c isprint.test -o ft_isprint

ft_toupper:
	gcc -Wall -Wextra -Werror -L../ -lft ../ft_toupper.c -x c toupper.test -o ft_toupper

ft_tolower:
	gcc -Wall -Wextra -Werror -L../ -lft ../ft_tolower.c -x c tolower.test -o ft_tolower

ft_memchr:
	gcc -Wall -Wextra -Werror -L../ -lft ../ft_memchr.c -x c memchr.test -o ft_memchr

ft_strchr:
	gcc -Wall -Wextra -Werror -L../ -lft ../ft_strchr.c -x c strchr.test -o ft_strchr

ft_strrchr: 
	gcc -Wall -Wextra -Werror -L../ -lft ../ft_strrchr.c -x c strrchr.test -o ft_strrchr

ft_bzero:
	gcc -Wall -Wextra -Werror -L../ -lft ../ft_bzero.c -x c bzero.test -o ft_bzero

ft_memcpy:
	gcc -Wall -Wextra -Werror -L../ -lft ../ft_memcpy.c -x c memcpy.test -o ft_memcpy

ft_strcpy:
	gcc -Wall -Wextra -Werror -L../ -lft ../ft_strcpy.c -x c strcpy.test -o ft_strcpy

ft_strcat:
	gcc -Wall -Wextra -Werror -L../ -lft ../ft_strcat.c -x c strcat.test -o ft_strcat

ft_strcmp:
	gcc -Wall -Wextra -Werror -L../ -lft ../ft_strcmp.c -x c strcmp.test -o ft_strcmp

ft_strstr:
	gcc -Wall -Wextra -Werror -L../ -lft ../ft_strstr.c -x c strstr.test -o ft_strstr

ft_memmove: 
	gcc -Wall -Wextra -Werror -L../ -lft ../ft_memmove.c -x c memmove.test -o ft_memmove

ft_memcmp:
	gcc -Wall -Wextra -Werror -L../ -lft ../ft_memcmp.c -x c memcmp.test -o ft_memcmp

ft_strlcat:
	gcc -Wall -Wextra -Werror -L../ -lft ../ft_strlcat.c -x c strlcat.test -o ft_strlcat

ft_strdup:
	gcc -Wall -Wextra -Werror -L../ -lft ../ft_strlcat.c -x c strdup.test -o ft_strdup

ft_atoi:
	gcc -Wall -Wextra -Werror -L../ -lft ../ft_atoi.c -x c atoi.test -o ft_atoi

ft_memccpy:
	gcc -Wall -Wextra -Werror -L../ -lft ../ft_memccpy.c -x c memccpy.test -o ft_memccpy

ft_strnstr:
	gcc -Wall -Wextra -Werror -L../ -lft ../ft_strnstr.c -x c strnstr.test -o ft_strnstr

ft_strncmp:
	gcc -Wall -Wextra -Werror -L../ -lft ../ft_strncmp.c -x c strncmp.test -o ft_strncmp

ft_strncpy:
	gcc -Wall -Wextra -Werror -L../ -lft ../ft_strncpy.c -x c strncpy.test -o ft_strncpy

ft_strncat:
	gcc -Wall -Wextra -Werror -L../ -lft ../ft_strncat.c -x c strncat.test -o ft_strncat

ft_memalloc:
	gcc -Wall -Wextra -Werror -L../ -lft ../ft_memalloc.c -x c memalloc.test -o ft_memalloc

ft_putchar:
	gcc -Wall -Wextra -Werror -L../ -lft ../ft_putchar.c -x c putchar.test -o ft_putchar

ft_putstr:
	gcc -Wall -Wextra -Werror -L../ -lft ../ft_putstr.c -x c putstr.test -o ft_putstr

ft_putendl:
	gcc -Wall -Wextra -Werror -L../ -lft ../ft_putendl.c -x c putendl.test -o ft_putendl

ft_putnbr:
	gcc -Wall -Wextra -Werror -L../ -lft ../ft_putnbr.c -x c putnbr.test -o ft_putnbr

ft_strnew:
	gcc -Wall -Wextra -Werror -L../ -lft ../ft_strnew.c -x c strnew.test -o ft_strnew

ft_strdel:
	gcc -Wall -Wextra -Werror -L../ -lft ../ft_strdel.c -x c strdel.test -o ft_strdel

ft_strclr:
	gcc -Wall -Wextra -Werror -L../ -lft ../ft_strclr.c -x c strclr.test -o ft_strclr

ft_strequ:
	gcc -Wall -Wextra -Werror -L../ -lft ../ft_strequ.c -x c strequ.test -o ft_strequ

ft_strnequ:
	gcc -Wall -Wextra -Werror -L../ -lft ../ft_strnequ.c -x c strnequ.test -o ft_strnequ

ft_strsub:
	gcc -Wall -Wextra -Werror -L../ -lft ../ft_strsub.c -x c strsub.test -o ft_strsub

ft_strjoin:
	gcc -Wall -Wextra -Werror -L../ -lft ../ft_strjoin.c -x c strjoin.test -o ft_strjoin

ft_putchar_fd:
	gcc -Wall -Wextra -Werror -L../ -lft ../ft_putchar_fd.c -x c putcharfd.test -o ft_putchar_fd

ft_putstr_fd:
	gcc -Wall -Wextra -Werror -L../ -lft ../ft_putstr_fd.c -x c putstrfd.test -o ft_putstr_fd

ft_putendl_fd:
	gcc -Wall -Wextra -Werror -L../ -lft ../ft_putendl_fd.c -x c putendlfd.test -o ft_putendl_fd

ft_putnbr_fd:
	gcc -Wall -Wextra -Werror -L../ -lft ../ft_putnbr_fd.c -x c putnbrfd.test -o ft_putnbr_fd

ft_memdel:
	gcc -Wall -Wextra -Werror -L../ -lft ../ft_memdel.c -x c memdel.test -o ft_memdel

ft_striter:
	gcc -Wall -Wextra -Werror -L../ -lft ../ft_striter.c -x c striter.test -o ft_striter

ft_striteri:
	gcc -Wall -Wextra -Werror -L../ -lft ../ft_striteri.c -x c striteri.test -o ft_striteri

ft_strmap:
	gcc -Wall -Wextra -Werror -L../ -lft ../ft_strmap.c -x c strmap.test -o ft_strmap

ft_strmapi:
	gcc -Wall -Wextra -Werror -L../ -lft ../ft_strmapi.c -x c strmapi.test -o ft_strmapi

ft_strtrim:
	gcc -Wall -Wextra -Werror -L../ -lft ../ft_strtrim.c -x c strtrim.test -o ft_strtrim

ft_strsplit:
	gcc -Wall -Wextra -Werror -L../ -lft ../ft_strsplit.c -x c strsplit.test -o ft_strsplit

ft_itoa:
	gcc -Wall -Wextra -Werror -L../ -lft ../ft_itoa.c -x c itoa.test -o ft_itoa

ft_lstnew:
	gcc -Wall -Wextra -Werror -L../ -lft ../ft_lstnew.c -x c lstnew.test -o ft_lstnew

ft_lstdelone:
	gcc -Wall -Wextra -Werror -L../ -lft ../ft_lstdelone.c -x c lstdelone.test -o ft_lstdelone

ft_lstdel:
	gcc -Wall -Wextra -Werror -L../ -lft ../ft_lstdel.c -x c lstdel.test -o ft_lstdel

ft_lstadd:
	gcc -Wall -Wextra -Werror -L../ -lft ../ft_lstadd.c -x c lstadd.test -o ft_lstadd

ft_lstiter:
	gcc -Wall -Wextra -Werror -L../ -lft ../ft_lstiter.c -x c lstiter.test -o ft_lstiter

ft_lstmap:
	gcc -Wall -Wextra -Werror -L../ -lft ../ft_lstmap.c -x c lstmap.test -o ft_lstmap

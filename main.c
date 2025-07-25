/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcardo <andcardo@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 17:44:02 by andcardo          #+#    #+#             */
/*   Updated: 2025/07/25 14:27:25 by andcardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <limits.h>

int	ft_printf(const char *format, ...);

int	main()
{
	int nb;
	int nb1;
	int nb3;
	nb = ft_printf("hello world\n");
	nb1 = ft_printf("hello world %x %c %x %% %a\n", 'c');
	printf("the first call: %i\n", nb);
	printf("the second call: %i\n", nb1);

	ft_printf("=============================\n");
	ft_printf("teste com strings\n");
	ft_printf("=============================\n");
	ft_printf("this is a str: %s\n", "uma couve, duas couves");
	ft_printf("this is a null str: %s\n", (char *)0);
	ft_printf("=============================\n");
	ft_printf("teste com integers\n");
	ft_printf("=============================\n");
	ft_printf("this is an int: %d\n", 13);
	ft_printf("this is an int: %d\n", 132345);
	ft_printf("this is an int: %d %d\n", 0);
	ft_printf("this is an int: %d\n", -13);
	nb3 = ft_printf("this is the INT_MIN: %d\n", INT_MIN);
	ft_printf("there were %d characters written\n", nb3);

	ft_printf("=============================\n");
	ft_printf("teste com unsigned integers\n");
	ft_printf("=============================\n");
	ft_printf("this is an unsigned int: %u\n", 132345);
	ft_printf("this is an unsigned int: %u %u\n", 0);
	ft_printf("this is a negative int: %u\n", -13);
	nb3 = ft_printf("this is the UINT_MAX: %u\n", UINT_MAX);


	ft_printf("=============================\n");
	ft_printf("teste com hexadeximals\n");
	ft_printf("=============================\n");

	ft_printf("this is an hexadecimal: %x\n", 132345);
	ft_printf("this is an hexadecimal: %x\n", 0);
	ft_printf("this is a negative hexa: %x\n", -13);

	ft_printf("this is an hexadecimal: %x\n", 1234);
	ft_printf("this is an hexadecimal: %x\n", 4242);
	ft_printf("this is an hexadecimal: %x\n", 7777);
	ft_printf("this is an hexadecimal: %x\n", 11);

	ft_printf("this is a capital hexadecimal: %X\n", 1234);
	ft_printf("this is a capital hexadecimal: %X\n", 4242);
	ft_printf("this is a capital hexadecimal: %X\n", 7777);
	ft_printf("this is a capital hexadecimal: %X\n", 11);

	ft_printf("=============================\n");
	ft_printf("teste com pointers\n");
	ft_printf("=============================\n");

	int test = 1234;
	int test1 = 4242;
	int test2 = 7777;
	int test3 = 11;
	int test4 = 0;
	int test5;
	ft_printf("this is a pointer: %p\n", &test);
	printf("this is a pointer: %p\n", &test);
	ft_printf("this is a pointer: %p\n", &test1);
	printf("this is a pointer: %p\n", &test1);
	ft_printf("this is a pointer: %p\n", &test2);
	printf("this is a pointer: %p\n", &test2);
	ft_printf("this is a pointer: %p\n", &test3);
	printf("this is a pointer: %p\n", &test3);
	ft_printf("this is a pointer: %p\n", &test4);
	printf("this is a pointer: %p\n", &test4);
	ft_printf("this is a pointer: %p\n", &test5);
	printf("this is a pointer: %p\n", &test5);
	ft_printf("this is a pointer: %p\n", (void *)0);
	printf("this is a pointer: %p\n", (void *)0);

	return(0);
}

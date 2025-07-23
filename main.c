/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcardo <andcardo@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 17:44:02 by andcardo          #+#    #+#             */
/*   Updated: 2025/07/23 19:38:23 by andcardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...);

int	main()
{
	int nb;
	int nb1;
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
	
	ft_printf("this is a null str: %d\n", 13);
	return(0);
}

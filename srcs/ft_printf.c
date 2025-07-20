/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcardo <andcardo@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:59:14 by andcardo          #+#    #+#             */
/*   Updated: 2025/07/19 16:03:07 by andcardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void static	handle_specifier(char specifier, va_list *args, size_t *len);

int	ft_printf(const char *format, ...)
{
	va_list args;
	size_t	len;
	size_t	i;
	char *sp_list;


	len = 0;
	i = 0;
	sp_list = "cspdiuxX%";
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && ft_strchr(sp_list, format[i + 1]))
		{
			i++;
			handle_specifier(format[i], &args, &len);
		}
		else {
			len += ft_putchar(format[i]);
		}
		i++;
	}
	va_end(args);
	return (len);
}

void static	handle_specifier(char sp, va_list *args, size_t *len)
{

	char *order = "cspdiuxX%";
	if (sp == 'c')
		*len += ft_putchar(va_arg(*args, int)); 
	/*
	else if (sp == 's')
		*len += ft_putstr()
		*/
}


int main() {
	ft_printf("hello world %x %c %x %% %a\n", 'c');
	return(0);
}

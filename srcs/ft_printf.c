/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcardo <andcardo@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:59:14 by andcardo          #+#    #+#             */
/*   Updated: 2025/07/23 19:37:15 by andcardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void static	handle_specifier(char specifier, va_list *args, size_t *char_count);

int	ft_printf(const char *format, ...)
{
	va_list args;
	size_t	char_count;
	size_t	i;
	char *sp_list;


	char_count = 0;
	i = 0;
	sp_list = "cspdiuxX%";
	va_start(args, format);
	while (format[i] != '\0')
	{
		if (format[i] == '%' && ft_strchr(sp_list, format[i + 1]))
		{
			i++;
			handle_specifier(format[i], &args, &char_count);
		}
		else {
			ft_putchar(format[i], &char_count);
		}
		i++;
	}
	va_end(args);
	return (char_count);
}

void static	handle_specifier(char sp, va_list *args, size_t *char_count)
{

	char *order = "cspdiuxX%";
	if (sp == 'c')
		ft_putchar((char)va_arg(*args, int), char_count); 
	else if (sp == 's')
		ft_putstr(va_arg(*args, char *), char_count);
	else if (sp == 'p')
		return;
	else if (sp == 'd' || sp == 'i')
		ft_putnbr(va_arg(*args, int), char_count);
	else if (sp == 'u')
		return;
	else if (sp == 'x')
		return;
	else if (sp == 'X')
		return;
	else if (sp == '%')
		ft_putchar((char)va_arg(*args, int), char_count);
}


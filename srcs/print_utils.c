/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcardo <andcardo@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 15:58:36 by andcardo          #+#    #+#             */
/*   Updated: 2025/07/23 19:37:50 by andcardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(const char c, size_t *char_count)
{
	if (write(1, &c, 1))
	{
		*char_count += 1;
	}
}

void	ft_putstr(char *s, size_t *char_count)
{
	if (!s)
	{
		*char_count += write(1, "(null)", 6);
		return;
	}
	while (*s)
	{
		ft_putchar(*s, char_count);
		s++;
	}
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	c = (char)c;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i++;
	}
	if (s[i] == '\0' && c == '\0')
		return ((char *)&(s[i]));
	return ((char *)0);
}

void	ft_putnbr(int, size_t *char_count)
{
	ft_printf("this is def a number");
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andcardo <andcardo@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 16:00:06 by andcardo          #+#    #+#             */
/*   Updated: 2025/07/23 19:37:07 by andcardo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H

#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include <stddef.h>


int	ft_printf(const char *format, ...);
char	*ft_strchr(const char *s, int c);
void	ft_putchar(char c, size_t *char_count);
void	ft_putstr(char *s, size_t *char_count);
void	ft_putnbr(int nbr, size_t *char_count);

#endif

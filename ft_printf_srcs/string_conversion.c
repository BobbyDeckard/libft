/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string_conversion.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imeulema <marvin@42lausanne.ch>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:41:42 by imeulema          #+#    #+#             */
/*   Updated: 2024/10/29 12:56:46 by imeulema         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incl/ft_printf.h"

void	string_conversion(va_list *args, int *ptr)
{
	char	*s;

	s = va_arg(*args, char *);
	if (!s)
	{
		ft_putstr_fd("(null)", 1);
		(*ptr) += 6;
		return ;
	}
	else if (!*s)
		return ;
	ft_putstr_fd(s, 1);
	(*ptr) += ft_strlen(s);
}
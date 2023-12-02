/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_upper.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouramt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 14:20:00 by abouramt          #+#    #+#             */
/*   Updated: 2023/12/02 14:20:09 by abouramt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex_upper(unsigned long nb)
{
	int		count;
	char	*hex;

	count = 0;
	hex = "0123456789ABCDEF";
	if (nb >= 16)
	{
		count += ft_print_hex_upper(nb / 16);
		count += ft_print_hex_upper(nb % 16);
	}
	else
		count += ft_putchar(hex[nb]);
	return (count);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_lower.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouramt <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 14:19:18 by abouramt          #+#    #+#             */
/*   Updated: 2023/12/02 14:19:34 by abouramt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex_lower(unsigned long nb)
{
	int		count;
	char	*hex;

	count = 0;
	hex = "0123456789abcdef";
	if (nb < 16)
		count += ft_putchar(hex[nb % 16]);
	else
	{
		count += ft_print_hex_lower(nb / 16);
		count += ft_putchar(hex[nb % 16]);
	}
	return (count);
}

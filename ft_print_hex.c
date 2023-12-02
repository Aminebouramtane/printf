/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouramt <abouramt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 14:18:38 by abouramt          #+#    #+#             */
/*   Updated: 2023/12/02 14:29:31 by abouramt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_hex(unsigned long nb)
{
	int		count;
	char	*ptr;

	count = 0;
	ptr = "0123456789abcdef";
	if (nb >= 16)
	{
		count += ft_print_hex(nb / 16);
		count += ft_print_hex(nb % 16);
	}
	else
		count += ft_putchar(ptr[nb]);
	return (count);
}

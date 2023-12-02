/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_u.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abouramt <abouramt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 14:20:28 by abouramt          #+#    #+#             */
/*   Updated: 2023/12/02 14:32:16 by abouramt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_u(unsigned int nb)
{
	int	count;

	count = 0;
	if (nb >= 0 && nb <= 9)
		count += ft_putchar(nb + '0');
	else if (nb > 9)
	{
		count += ft_print_u(nb / 10);
		count += ft_print_u(nb % 10);
	}
	return (count);
}

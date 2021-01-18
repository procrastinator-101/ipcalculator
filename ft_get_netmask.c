/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_netmask.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/01 22:42:22 by youness           #+#    #+#             */
/*   Updated: 2020/06/05 00:09:46 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ipcalculator.h"

t_ip	ft_get_netmask(int mask)
{
	int		i;
	t_ip	netmask;

	if (!(netmask = malloc(4 * sizeof(char))))
		return (0);
	i = 0;
	while (mask > 0 && i < 4)
	{
		mask -= NBITS(char);
		netmask[i++] = mask >= 0 ? 255 : (255 << (-mask));
	}
	while (i < 4)
		netmask[i++] = 0;
	return (netmask);
}

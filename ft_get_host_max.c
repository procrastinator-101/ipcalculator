/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_host_max.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 22:17:55 by youness           #+#    #+#             */
/*   Updated: 2020/06/05 00:09:14 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ipcalculator.h"

t_ip	ft_get_host_max(t_ip netadress, t_ip netmask)
{
	int		i;
	int		lsb;
	t_ip	host_max;

	if (!(host_max = malloc(4 * sizeof(char))))
		return (0);
	i = -1;
	while (++i < 4)
		host_max[i] = netadress[i];
	while (--i >= 0 && netmask[i] < 255)
	{
		lsb = ft_lsb(netmask[i]);
		host_max[i] += 255 >> (lsb ? NBITS(char) - lsb + 1 : 0);
		host_max[i] -= i == 3;
	}
	return (host_max);
}

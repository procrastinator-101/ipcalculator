/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_host_min.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 22:08:04 by youness           #+#    #+#             */
/*   Updated: 2020/06/05 00:10:49 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ipcalculator.h"

t_ip	ft_get_host_min(t_ip netadress, t_ip netmask)
{
	int		i;
	t_ip	host_min;

	if (!(host_min = malloc(4 * sizeof(char))))
		return (0);
	i = -1;
	while (++i < 4)
		host_min[i] = netadress[i];
	if (netmask[3] < 255)
		host_min[3] += 1;
	return (host_min);
}

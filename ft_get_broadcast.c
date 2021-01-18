/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_broadcast.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 23:24:29 by youness           #+#    #+#             */
/*   Updated: 2020/06/05 00:25:03 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ipcalculator.h"

t_ip	ft_get_broadcast(t_ip host_max, t_ip netmask)
{
	int		i;
	t_ip	broadcast;

	if (!(broadcast = malloc(4 * sizeof(char))))
		return (0);
	i = -1;
	while (++i < 4)
		broadcast[i] = host_max[i];
	broadcast[3] += netmask[3] < 255;
	return (broadcast);
}

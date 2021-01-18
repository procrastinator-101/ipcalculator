/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_netaddress.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/01 23:14:26 by youness           #+#    #+#             */
/*   Updated: 2020/06/05 00:12:45 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ipcalculator.h"

t_ip	ft_get_netaddress(t_ip ip, t_ip netmask)
{
	int		i;
	t_ip	netaddress;

	if (!(netaddress = malloc(4 * sizeof(char))))
		return (0);
	i = -1;
	while (++i < 4)
		netaddress[i] = ip[i] & netmask[i];
	return (netaddress);
}

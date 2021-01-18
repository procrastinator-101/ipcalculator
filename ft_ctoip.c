/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ctoip.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/02 20:39:42 by youness           #+#    #+#             */
/*   Updated: 2020/06/05 00:08:11 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ipcalculator.h"

t_ip	ft_ctoip(unsigned char *str)
{
	int		i;
	int		j;
	t_ip	ip;

	if (!(ip = malloc(4 * sizeof(char))))
		return (0);
	i = -1;
	while (++i < 4)
		ip[i] = 0;
	i = 0;
	j = -1;
	while (i < 4 && str[++j])
	{
		if (str[j] == '.')
			i++;
		else if (str[j] > 47 && str[j] < 58)
			ip[i] = ip[i] * 10 + str[j] - 48;
		else
		{
			free(ip);
			return (0);
		}
	}
	return (ip);
}

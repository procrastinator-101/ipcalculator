/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_host_num.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/04 23:36:03 by youness           #+#    #+#             */
/*   Updated: 2020/06/05 00:23:26 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ipcalculator.h"

unsigned long long	ft_get_host_num(int mask)
{
	unsigned long long	host_num;

	host_num = 1;
	if (mask > 31)
		return (1);
	return ((host_num << (32 - mask)) - 2);
}

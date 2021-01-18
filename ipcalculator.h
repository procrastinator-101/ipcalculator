/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ipcalculator.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: youness <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/01 22:40:19 by youness           #+#    #+#             */
/*   Updated: 2020/06/05 00:25:19 by youness          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IPCALCULATOR_H
# define IPCALCULATOR_H

#include <stdio.h>
#include <stdlib.h>

# define NBITS(x) (int)(8 * sizeof(x))

typedef	unsigned char*	t_ip;

int						ft_lsb(unsigned char c);

void					ft_display_ip(t_ip ip);

t_ip					ft_ctoip(unsigned char *str);

t_ip					ft_get_netmask(int mask);
t_ip					ft_get_netaddress(t_ip ip, t_ip netmask);

t_ip					ft_get_host_min(t_ip netadress, t_ip netmask);
t_ip					ft_get_host_max(t_ip netadress, t_ip netmask);
t_ip					ft_get_broadcast(t_ip host_max, t_ip netmask);

unsigned long long		ft_get_host_num(int mask);

#endif

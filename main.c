#include "ipcalculator.h"

int main()
{
	int					mask;
	int					version;
	unsigned long long	host_number;
	
	char	str[24];

	t_ip	ip;
	t_ip	netmask;
	t_ip	netadress;
	t_ip	host_min;
	t_ip	host_max;
	t_ip	broadcast;

	printf("enter the ip version  : ");
	scanf("%d", &version);
	printf("enter the mask number : ");
	scanf("%d", &mask);
	printf("enter the ip address  : ");
	scanf("%s", str);

	ip = ft_ctoip(str);
	netmask = ft_get_netmask(mask);
	netadress = ft_get_netaddress(ip, netmask);
	host_min = ft_get_host_min(netadress, netmask);
	host_max = ft_get_host_max(netadress, netmask);
	broadcast = ft_get_broadcast(host_max, netmask);
	host_number = ft_get_host_num(mask);

	printf("netmask             : ");
	ft_display_ip(netmask);
	printf("netadress           : ");
	ft_display_ip(netadress);
	printf("host_min            : ");
	ft_display_ip(host_min);
	printf("host_max            : ");
	ft_display_ip(host_max);
	printf("broadcast           : ");
	ft_display_ip(broadcast);
	printf("number of hsots     : %llu\n", host_number);
	return (0);
}

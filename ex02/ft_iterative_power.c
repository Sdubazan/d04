/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdubazan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 11:12:10 by sdubazan          #+#    #+#             */
/*   Updated: 2020/06/23 11:20:10 by sdubazan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
	int r;
	r = 1;
	if((nb == 0 && power != 0) || power < 0)
	{
	return (0):
	}
if((power == 0) || ((nb < 0) && (power == 0)))
{
return (1);
}
else
{
	while(power >0)
	{
		r = nb * r;
		power--;
	}
	return (r);
}
}

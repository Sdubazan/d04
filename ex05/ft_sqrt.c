/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdubazan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 11:25:02 by sdubazan          #+#    #+#             */
/*   Updated: 2020/06/23 11:27:15 by sdubazan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_sqrt(int nb)
{
	int i;
	int sq;

	i = 1;
	sq = 1;
	if(nb == 0)
	{
		return(0);
	}
	while(i * i < nb)
	{
		i++;
	}
	if ((nb % i) == 0)
	{
		return (i);
	}
	else
	{
		return(0);
	}
}

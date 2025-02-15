/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdubazan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 11:22:36 by sdubazan          #+#    #+#             */
/*   Updated: 2020/06/23 11:23:39 by sdubazan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int nb)
{
	if(nb < 0)
	{
		return(-1);
	}
	if(nb <=2)
	{
		return(nb);
	}
	return ft_fibonacci(nb - 1) + ft_fibonacci(nb - 2);
}

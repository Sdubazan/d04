/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdubazan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 11:02:25 by sdubazan          #+#    #+#             */
/*   Updated: 2020/06/23 11:04:42 by sdubazan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
	if(nb < 0)
	{
		return(0);
	}

	if(nb ==0 || nb == 1)
	{
		return(1);
	}
	return nb * ft_recursive_factorial(nb - 1);
}

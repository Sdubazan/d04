/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdubazan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/19 09:54:52 by sdubazan          #+#    #+#             */
/*   Updated: 2020/06/21 11:51:28 by sdubazan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int ft_iterative_factorial(int nb)
{
inti;
unsigned intres;

if (nb < 0 || nb > 12)
return (0);
i = 2;
res = 1;
while (i <= nb)
{
res *= i;
++i;
}
return (res);
}

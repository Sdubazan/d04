/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdubazan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 11:33:43 by sdubazan          #+#    #+#             */
/*   Updated: 2020/06/23 11:40:04 by sdubazan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int is_ok(int table[8], int column, int line)
{
	int i;
	i = -1;
	while (++i < column)
	{
		if (line == table[i] || i + table[i] == column + line || i - table[i] == column - line)
		{
			return (0);
		}
		return (1);

	}
}

void bck_trk(int table[8], int *an, int po)
{
	int i;
	if(po == 8)
	{
		*an = 1 + *an;
	}
	else
	{
		i = -1;
		while(++i < 8)
		{
			if(is_ok(table, po, i))
			{
				table[po] = i;
				bck_trk(table, an, po + 1);
			}
		}

	}

	int ft_eight_queens_puzzle(void)
	{
		int table[8];
		int i;
		int ans;

		i = -1;
		while (++i < 8)
			table[i] = -1;
		ans = 0;
		bck_trk(table, &ans, 0);
		return (ans);
	}

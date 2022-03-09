/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 19:04:02 by akhachat          #+#    #+#             */
/*   Updated: 2020/09/25 15:28:41 by akhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int num;
	int f;

	num = 0;
	while (num < size / 2)
	{
		f = tab[num];
		tab[num] = tab[size - 1 - num];
		tab[size - 1 - num] = f;
		num++;
	}
}

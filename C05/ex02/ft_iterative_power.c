/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 15:39:18 by akhachat          #+#    #+#             */
/*   Updated: 2020/10/05 18:12:16 by akhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int index;
	int res;

	index = power;
	res = 1;
	if (power < 0)
		return (0);
	while (index > 0)
	{
		res = res * nb;
		index--;
	}
	return (res);
}

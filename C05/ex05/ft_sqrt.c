/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/05 17:27:29 by akhachat          #+#    #+#             */
/*   Updated: 2020/10/06 15:11:46 by akhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long int dig;

	dig = 1;
	if (nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	while (dig * dig < nb)
	{
		dig++;
	}
	if ((dig * dig) == nb)
		return ((int)dig);
	else
		return (0);
}

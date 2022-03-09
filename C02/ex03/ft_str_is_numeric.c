/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 16:19:48 by akhachat          #+#    #+#             */
/*   Updated: 2020/10/02 16:49:13 by akhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdio.h>

int		ft_str_is_numeric(char *str)
{
	int		index;
	bool	valid;
	char	current;

	index = 0;
	valid = true;
	while (true)
	{
		current = str[index];
		if (current == '\0')
		{
			break ;
		}
		if (!(current >= '0' && current <= '9'))
		{
			valid = false;
			break ;
		}
		index++;
	}
	return (valid);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 17:01:37 by akhachat          #+#    #+#             */
/*   Updated: 2020/10/02 14:51:33 by akhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>
#include <stdio.h>

int		ft_str_is_printable(char *str)
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
		if (!(current >= ' ' || current == 127))
		{
			valid = false;
			break ;
		}
		index++;
	}
	return (valid);
}

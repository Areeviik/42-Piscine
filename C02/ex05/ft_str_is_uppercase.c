/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 17:00:45 by akhachat          #+#    #+#             */
/*   Updated: 2020/10/02 14:50:56 by akhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int		ft_str_is_uppercase(char *str)
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
		if (!(current >= 'A' && current <= 'Z'))
		{
			valid = false;
			break ;
		}
		index++;
	}
	return (valid);
}

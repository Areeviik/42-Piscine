/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 16:34:18 by akhachat          #+#    #+#             */
/*   Updated: 2020/10/02 14:50:39 by akhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int		ft_str_is_lowercase(char *str)
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
		if (!(current >= 'a' && current <= 'z'))
		{
			valid = false;
			break ;
		}
		index++;
	}
	return (valid);
}

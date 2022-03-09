/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akhachat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/28 13:36:53 by akhachat          #+#    #+#             */
/*   Updated: 2020/10/02 14:49:10 by akhachat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdbool.h>

int		ft_str_is_alpha(char *str)
{
	int		index;
	bool	valid;
	char	c;

	index = 0;
	valid = true;
	while (true)
	{
		c = str[index];
		if (c == '\0')
		{
			break ;
		}
		if (!((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')))
		{
			valid = false;
			break ;
		}
		index++;
	}
	return (valid);
}

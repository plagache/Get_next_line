/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plagache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/19 19:04:44 by plagache          #+#    #+#             */
/*   Updated: 2018/12/17 11:57:21 by plagache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		d;
	size_t	t;

	t = ft_strlen(s);
	d = -1;
	if (s == NULL)
		return (0);
	while (d < (int)t)
	{
		d++;
		if (*(s + d) == (char)c)
			return ((char*)s + d);
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_2lstaddstrt.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: plagache <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/20 12:09:25 by plagache          #+#    #+#             */
/*   Updated: 2018/12/20 13:55:22 by plagache         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_2lstaddstrt(t_dlist **lst, t_dlist *link)
{
	link->prev = NULL;
	link->next = *lst;
	*lst = link;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   copy.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 09:30:29 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/19 10:03:22 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "kit.h"

t_any	copy(t_any address)
{
	t_any			any;
	t_typedata		typedata;
	unsigned int	i;

	typedata = typetree_search(address);
	any = typedata->create();
	i = 0;
	while (i < typedata->size)
		((unsigned char *)any)[i] = ((unsigned char *)address)[i]; 
	return (any);
}
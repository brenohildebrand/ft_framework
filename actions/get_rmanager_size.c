/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_rmanager_size.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:21:05 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/28 20:51:48 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../types/usize_avltree.h"

t_u32	get_rmanager_size(const t_usize_avltree t)
{
	if (t == AVL_EMPTY)
		return (0);
	else
		return (t->size);
}

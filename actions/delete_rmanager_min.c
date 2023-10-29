/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delete_rmanager_min.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.sp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 15:52:15 by bhildebr          #+#    #+#             */
/*   Updated: 2023/10/28 20:51:30 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "actions.h"
#include "../types/usize_avltree.h"
#include <stdlib.h>

t_usize	delete_rmanager_min(t_usize_avltree *t)
{
	t_usize_avltree	to_free;
	t_usize			retval;

	if ((*t)->child[LEFT])
	{
		retval = delete_rmanager_min(&(*t)->child[LEFT]);
	}
	else
	{
		to_free = *t;
		retval = to_free->data;
		*t = to_free->child[RIGHT];
		free(to_free);
	}
	update_rmanager_aggregate(*t);
	rebalance_rmanager(t);
	return (retval);
}

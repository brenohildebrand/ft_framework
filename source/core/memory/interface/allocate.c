/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 22:47:06 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/14 22:46:31 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memory_management.h"

void	*allocate(int size)
{
	void	*pointer;
	t_i32	i;

	assert(size > 0);
	pointer = malloc(size);
	assert(pointer != NULL);
	i = 0;
	while (i < size)
	{
		((t_u8 *)pointer)[i] = 0;
		i++;
	}
	memtree_insert(NULL, pointer);
	return (pointer);
}
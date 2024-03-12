/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_resize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 11:43:37 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/12 12:05:22 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

static void	shrink(t_list instance, t_i32 new_max_length)
{
	t_any	*new_content;
	t_i32	new_start;
	t_i32	new_end;
	t_i32	i;

	new_content = (t_any *)allocate(new_max_length * sizeof(t_any));
	new_start = 0;
	new_end = new_max_length - 1;
	i = 0;
	while (i < new_max_length)
	{
		new_content[new_start + i] = instance->content[instance->start + i];
		i++;
	}
	while (i < instance->length)
	{
		any_destroy(instance->content[instance->start + i]);
		i++;
	}
	deallocate(instance->content);
	instance->max_length = new_max_length;
	instance->start = new_start;
	instance->end = new_end;
	instance->content = new_content;
}

static void	grow(t_list instance, t_i32 new_max_length)
{
	t_any	*new_content;
	t_i32	new_start;
	t_i32	new_end;
	t_i32	i;

	new_content = (t_any *)allocate(new_max_length * sizeof(t_any));
	new_start = (new_max_length - instance->length) / 2;
	new_end = new_start + instance->length - 1;
	i = 0;
	while (i < instance->length)
	{
		new_content[new_start + i] = instance->content[instance->start + i];
		i++;
	}
	deallocate(instance->content);
	instance->max_length = new_max_length;
	instance->start = new_start;
	instance->end = new_end;
	instance->content = new_content;
}

void	list_resize(t_list instance, t_any size)
{
	t_i32	new_max_length;

	new_max_length = any_to_i32(size);
	if (new_max_length < instance->length)
	{
		shrink(instance, new_max_length);
	}
	else if (new_max_length > instance->length)
	{
		grow(instance, new_max_length);
	}
	else
	{
		return ;
	}
}

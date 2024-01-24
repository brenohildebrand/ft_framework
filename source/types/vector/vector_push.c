/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_push.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 10:15:41 by bhildebr          #+#    #+#             */
/*   Updated: 2024/01/19 10:49:03 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

void	vector_push(t_vector vector, t_any value)
{
	if (vector->max_length == 0)
	{
		vector_init(vector);		
	}
	else if ((vector->length + 1) > vector->max_length / 3)
	{
		vector_expand(vector);
	}
	vector->content[vector->length] = value;
	vector->length += 1;
}
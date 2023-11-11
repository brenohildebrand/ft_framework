/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_vec2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 14:53:18 by bhildebr          #+#    #+#             */
/*   Updated: 2023/11/11 10:13:47 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "actions.h"
#include "../types/vec2.h"

void	init_vec2(t_vec2 *vec2)
{
	(*vec2) = smalloc(sizeof(struct s_vec2));
	(*vec2)->x = 0;
	(*vec2)->y = 0;
}

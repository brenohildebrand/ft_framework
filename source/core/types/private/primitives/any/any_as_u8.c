/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   any_as_u8.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 10:46:59 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/01 10:47:31 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "any.h"

t_u8	any_as_u8(t_any instance)
{
	return (instance->value.u8);	
}
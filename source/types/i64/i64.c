/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i64.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:28:29 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/28 12:29:44 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "i64.h"

t_type	i64(void)
{
	static struct s_type	type = {
		.name = "i64",
		.size = sizeof(t_i64)
	};

	return (&type);
}

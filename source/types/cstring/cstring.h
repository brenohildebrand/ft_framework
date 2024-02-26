/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cstring.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/23 16:08:42 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/25 19:21:26 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CSTRING_H
# define CSTRING_H

typedef char	*t_cstring;

t_type	cstring(void);
t_any	cstring_to_any(t_cstring literal);

#endif
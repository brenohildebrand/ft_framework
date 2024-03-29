/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   call_if.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 14:34:11 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/17 02:58:58 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Calls the given callback function if the given condition evaluates to true.
 *
 * @param condition The condition to evaluate.
 * @param callback The callback function to call if the condition is true.
 */
void call_if(t_i32 condition, void (*callback)(void))
{
	if (condition)
	{
		callback();
	}
}

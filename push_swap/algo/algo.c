/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbrebion <tbrebion@42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:22:00 by tbrebion          #+#    #+#             */
/*   Updated: 2022/01/19 14:21:15 by tbrebion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

/*
 * Dans main ----> check_order  si check_order == 0   ---->  end of program
 * else 
 * 		si stack_a <= 5  
 * 			call  sort_small_stack
 * 		else 
 * 			call  sort_big_stack
 *
*/
void

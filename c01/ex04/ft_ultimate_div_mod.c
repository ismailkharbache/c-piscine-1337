/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikharbac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/09 15:22:00 by ikharbac          #+#    #+#             */
/*   Updated: 2021/08/09 16:02:46 by ikharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	c = *a ;
	*a = *a / *b ;
	*b = c % *b ;
}

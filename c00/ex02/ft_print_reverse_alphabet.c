/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikharbac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 14:41:04 by ikharbac          #+#    #+#             */
/*   Updated: 2021/08/08 12:58:46 by ikharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
void	ft_print_reverse_alphabet(void)
{
	char	i;

	i = 'z';
	while (i >= 'a' )
	{
		write(1, &i, 1);
		i-- ;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdulkadi <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 14:33:02 by fdulkadi          #+#    #+#             */
/*   Updated: 2023/07/18 11:07:00 by fdulkadi         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	figure;

	figure = '0';
	while (figure <= '9' )
	{
		write (1, &figure, 1);
		figure++;
	}
}

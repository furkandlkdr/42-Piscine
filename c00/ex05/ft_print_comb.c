/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdulkadi <fdulkadi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 17:04:19 by fdulkadi          #+#    #+#             */
/*   Updated: 2023/07/23 12:57:58 by fdulkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	first;
	int	second;
	int	third;

	first = '0';
	second = '0';
	third = '0';
	while (first <= 7)
	{
		while (second <= 8)
		{
			second = first + 1;
			while (third <= 9)
			{
				third = second + 1;	
				write (1, &first, 1);
				write (1, &second, 1);
				write (1, &third, 1);
				third++;
			}
			second++;
		}
		first++;
	}
}
int main(void){
	ft_print_comb();
	return 0;
}

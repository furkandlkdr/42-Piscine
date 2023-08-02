/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdulkadi <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 19:27:19 by fdulkadi          #+#    #+#             */
/*   Updated: 2023/07/31 19:32:02 by fdulkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	temp;

	if ((nb < 0) || (nb > 12))
		return (0);
	if (nb < 2)
		return (1);
	temp = 1;
	while (nb > 1)
	{
		temp = temp * nb;
		nb--;
	}
	return (temp);
}

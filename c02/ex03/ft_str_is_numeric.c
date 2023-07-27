/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdulkadi <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:25:17 by fdulkadi          #+#    #+#             */
/*   Updated: 2023/07/27 17:03:03 by fdulkadi         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 1 && str[i] <= 47)
			return (0);
		else if (str[i] >= 58 && str[i] <= 127)
			return (0);
		i++;
	}
	return (1);
}

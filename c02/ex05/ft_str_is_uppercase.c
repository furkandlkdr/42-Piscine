/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdulkadi <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:38:41 by fdulkadi          #+#    #+#             */
/*   Updated: 2023/07/27 17:07:32 by fdulkadi         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 1 && str[i] <= 64)
			return (0);
		else if (str[i] >= 91 && str[i] <= 127)
			return (0);
		i++;
	}
	return (1);
}
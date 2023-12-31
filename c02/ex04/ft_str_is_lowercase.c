/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdulkadi <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:34:33 by fdulkadi          #+#    #+#             */
/*   Updated: 2023/07/27 17:05:14 by fdulkadi         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 1 && str[i] <= 96)
			return (0);
		else if (str[i] >= 123 && str[i] <= 127)
			return (0);
		i++;
	}
	return (1);
}

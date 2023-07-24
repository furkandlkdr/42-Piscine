/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdulkadi <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:05:36 by fdulkadi          #+#    #+#             */
/*   Updated: 2023/07/24 12:22:08 by fdulkadi         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] > 0 && str[i] <= 64)
			return (0);
		else if (str[i] >= 123 && str[i] <= 127)
			return (0);
		else if (str[i] >= 91 && str[i] <= 96)
			return (0);
	}
	return (1);

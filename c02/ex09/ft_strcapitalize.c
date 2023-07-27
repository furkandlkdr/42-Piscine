/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdulkadi <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 12:45:39 by fdulkadi          #+#    #+#             */
/*   Updated: 2023/07/27 17:13:55 by fdulkadi         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	check(char let)
{
	if ((let >= 48 && let <= 57) || (let >= 65 && let <= 90))
		return (0);
	else if (let >= 97 && let <= 122)
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
			str[i] += 32;
		i++;
	}
	i = 0;
	while (str[i] != '\0')
	{
		if (str[0] >= 97 && str[0] <= 122)
			str[0] -= 32;
		else if (check(str[i - 1]) == 1)
			if (str[i] >= 97 && str[i] <= 122)
				str[i] -= 32;
		i++;
	}
	return (str);
}

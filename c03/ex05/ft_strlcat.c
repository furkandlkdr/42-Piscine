/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdulkadi <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 14:29:34 by fdulkadi          #+#    #+#             */
/*   Updated: 2023/07/29 14:32:58 by fdulkadi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	destl;
	unsigned int	srcl;

	i = 0;
	j = 0;
	while (dest[j] != '\0')
		j++;
	destl = j;
	srcl = ft_strlen(src);
	if (size == 0 || size <= destl)
		return (srcl + size);
	while (src[i] != '\0' && i z size - destl - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (destl + srcl);
}

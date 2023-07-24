/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdulkadi <@student.42kocaeli.com.tr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 16:52:45 by fdulkadi          #+#    #+#             */
/*   Updated: 2023/07/24 17:39:27 by fdulkadi         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <ctype.h>

void	*ft_print_memory(void *addr, unsigned int size)
{
	char *hexa;
	char *str;
	unsigned int	i;
	unsigned int	j;
	
	hexa = "0123456789abcdef";
	str = (char *)addr;

	i = 0;
	while (i < size)
	{
		if (i % 16 == 0)
			write(1, "%08x: ", (unsigned int)str);
		write(1, &hexa[str[i] & 0xff], 1);
		if (isprint(str[i]))
			write(1, &str[i], 1);
		else
			write(1, ".", 1);
		if ((i+1) % 16 == 0)
			write(1, "\n", 1);
		i++;
	}
	return (addr);
}

#include <stdio.h>

int main(void) {
  char str[] = "Hello, world!";
  ft_print_memory(str, sizeof(str));
  return 0;
}


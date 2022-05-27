/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exo00.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgatopreto <maximegomes.dinis@outlook.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 16:21:54 by lgatopreto        #+#    #+#             */
/*   Updated: 2022/05/27 16:28:15 by lgatopreto       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(STDOUT_FILENO, &c, sizeof(c));
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}

void replace_first_h_with_y(char *str)
{
	if (str[0] == 'H' || str[0] == 'h')
		str[0] = 'Y';
	ft_putstr(str);
}

void	replace_first_char(char *src, char *dest)
{
	dest[0] = src[0];
	ft_putstr(src);
	ft_putstr(dest);
}

int main (void)
{
	char	str1[] = "Hello";
	char	str2[] = "Julio";

	ft_putstr(str1);
	replace_first_h_with_y(str1);
	replace_first_char(str1, str2);
	return (EXIT_SUCCESS);
}

/*
Hello
Yello
Yello
Yulio
*/

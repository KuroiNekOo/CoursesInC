/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exo01.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgatopreto <maximegomes.dinis@outlook.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 15:13:18 by lgatopreto        #+#    #+#             */
/*   Updated: 2022/05/26 16:00:48 by lgatopreto       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	fn(int i)
{
	if (i <= 5)
	{
		++i;
		write(STDOUT_FILENO, "D", sizeof(char));
		fn(i);
		// Affiche 6 * F a la suite des "D" (retour en arriere)
		write(STDOUT_FILENO, "F", sizeof(char));
		return (0);
	}
	else
	{
		return (0);
	}
}

int main (int ac, char *av[])
{
	if (ac > 1)
		fn(atoi(av[1]));
	write(STDOUT_FILENO, "\n", sizeof(char));
	return (EXIT_SUCCESS);
}

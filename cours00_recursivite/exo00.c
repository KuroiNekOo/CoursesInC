/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exo00.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgatopreto <maximegomes.dinis@outlook.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 19:31:48 by lgatopreto        #+#    #+#             */
/*   Updated: 2022/05/26 15:10:31 by lgatopreto       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	fact(int n)
{
	if (n == 0 || n == 1)
		return (1);
	return (n * fact(n - 1));
}

int main (int ac, char *av[])
{
	if (ac > 1)
		printf("fact result: %d\n", fact(atoi(av[1])));
	return (EXIT_SUCCESS);
}

/* Fonctionnement de fact */
/*
-- Step 1 --
5 * fact(4)
4 * fact(3)
3 * fact(2)
2 * fact(1)
1! == 1

-- Step 2 --
1! == 1
2 * fact(1) = 2 * 1
3 * fact(2) = 3 * 2 * 1
4 * fact(3) = 4 * 3 * 2 * 1
5 * fact(4) = 5 * 4 * 3 * 2 * 1

return 120
*/

/* Factiorels */
// 5! = 5 * 4 * 3 * 2 * 1
// 4! =     4 * 3 * 2 * 1
// 3! =         3 * 2 * 1
// 2! =             2 * 1
// 1! =                 1
// 0! = 				1

// 5! = 5 * 4!
// 4! = 4 * 3!
// 3! = 3 * 2!
// 2! = 2 * 1!
// 1! = 1 * 1!

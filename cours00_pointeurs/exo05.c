/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exo05.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgatopreto <maximegomes.dinis@outlook.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 13:28:17 by lgatopreto        #+#    #+#             */
/*   Updated: 2022/05/25 13:48:17 by lgatopreto       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

/* Fonctionnement avec une copie (1) */

void	fct1(int a) // copie de a du main
{
	a = 12; // valeur de la copie
	printf("valeur a fct: %d\n", a);
}

/* Fonctionnement avec un pointeur (2) */

void	fct2(int *b) // adress de b du main
{
	*b = 12; // new valeur de b
	printf("valeur b fct: %d\n", *b);
}

int main(void)
{
	int	a; // (1)
	int b; // (2)

	// (1)
	a = 42;
	fct1(a);
	printf("valeur a main: %d\n", a);

	// (2)
	b = 42;
	fct2(&b); // print la valeur de b avec son adress
	printf("valeur b main: %d\n", b);

	return (EXIT_SUCCESS);
}

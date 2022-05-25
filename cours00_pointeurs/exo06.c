/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exo06.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgatopreto <maximegomes.dinis@outlook.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 13:51:06 by lgatopreto        #+#    #+#             */
/*   Updated: 2022/05/25 20:55:07 by lgatopreto       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
	int	a;
	int	*ptr;
	int **ptr2;
	void	*superptr; // sert a transporter des adress

	a = 42;
	ptr = &a;
	ptr2 = &ptr;
	printf("valeur a: %d\n", a);
	printf("valeur ptr: %d\n", *ptr);
	printf("valeur ptr2: %d\n", **ptr2);



	// ptr = &ptr2; (impossible sauf si >>)
	superptr = &ptr2;
	ptr = superptr; // adress de ptr2
	printf("new valeur ptr: %d\n", *ptr); // adress de ptr2
	printf("new valeur ptr2: %d\n", **ptr2); // adress de ptr2 (logique)

	return (EXIT_SUCCESS);
}


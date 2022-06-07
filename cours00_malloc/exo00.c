/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exo00.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgatopreto <maximegomes.dinis@outlook.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 15:47:56 by lgatopreto        #+#    #+#             */
/*   Updated: 2022/06/07 09:21:44 by lgatopreto       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h> // malloc
#include <unistd.h>

int main(void)
{
	/* Allocation fixe */
	int *pa;
	int a;

	a = 0;
	pa = &a;
	printf("Adresse de a: %p\n", &a);
	printf("Adresse de a: %p\n", pa);
	printf("Adresse du pointeur pa: %p\n", &pa);
	printf("Valeur de l'adresse pointee par pa: %d\n", *pa);
	


	/* Allocation dynamique */
	int *pb;

	pb = malloc(sizeof(int));
	// OU pb = (int *) malloc(sizeof(int)); -Cast pointeur sur int
	//pb = NULL;
	if (pb == NULL)
	{
		printf("Erreur malloc !");
		return 1;
	}
		
	*pb = 10; // impossible sans malloc

	printf("Adresse de pb: %p\n", pb);
	printf("Adresse du pointeur pb: %p\n", &pb);
	printf("Valeur de l'adresse pointee par pb: %d\n", *pb);

	free(pb); // liberer l'espace dans la heap (desalouer)



	/* Allocation fixe [tableau] */

	int tab[5];

	tab[0] = 0;
	tab[1] = 10;
	tab[2] = 20;
	tab[3] = 30;
	tab[4] = 40;

	int i = 0;
	while (i < 5)
	{
		printf("tab[%d] = %d\n", i, tab[i]);
		i++;
	}



	/* Allocation dynamique [tableau] */

	int *tab2 = malloc(5 * sizeof(int)); // tableau de 5 cases

	*tab2 = 0;
	*(tab2 + 1) = 10;
	*(tab2 + 2) = 20;
	tab2[3] = 30;
	tab2[4] = 40;

	int n = 0;
	while (n < 5)
	{
		printf("tab2[%d] = %d\n", n, tab2[n]);
		n++;
	}

	free(tab2);

	return (EXIT_SUCCESS);
}

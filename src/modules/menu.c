
/* Libraries */
#include <stdio.h>
#include <stdlib.h>

/* Headers */
#include "../../headers/menu.h"

#include "../../headers/alg-conditional.h"
#include "../../headers/alg-sequential.h"

#include "../../headers/repetition-algorithms/alg-repetition-while.h"
#include "../../headers/repetition-algorithms/alg-repetition-do-while.h"
#include "../../headers/repetition-algorithms/alg-repetition-for.h"

#include "../../headers/vectors.h"
#include "../../headers/matrices.h"

/* Constant */
const int FLAG = 0;

/* Global variable */
unsigned int choice;

 void load_alg_repetition (void)
{
	do
	{
		printf("\n\tRepetition algorithms \n");
		printf("\nPlease choose one of the following options:\n");

		printf("___________________________________________\n\n");
		printf("1. Repetition algorithms - For\n");
		printf("2. Repetition algorithms - While\n");
		printf("3. Repetition algorithms - Do While\n");
		printf("4. Return\n");
		printf("5. Exit\n");

		printf("___________________________________________\n\n");
		printf("\t\tEnter Choice: ");
		scanf("%u", &choice);

		system("clear");

		switch (choice)
		{
			case 1: load_alg_repetition_for();
				break;
			case 2: load_alg_repetition_while();
				break;
			case 3: load_alg_repetition_do_while();
				break;
			case 4: load_menu();
				break;
			case 5: printf("\nQuitting program!\n");
				exit(FLAG);
				break;
			default: printf("\nInvalid choice!\n");
				break;
		}
	} while (choice != 5);
}

/* Menu function */
void load_menu(void)
{
	do
	{
		printf("\n\tHoweworks - Algorithms \n");
		printf("\nPlease choose one of the following options:\n");

		printf("___________________________________________\n\n");
		printf("1. Sequential algorithms\n");
		printf("2. Conditional algorithms\n");
		printf("3. Repetition algorithms\n");
		printf("4. Vectors\n");
		printf("5. Matrices\n");
		printf("6. Exit\n");

		printf("___________________________________________\n\n");
		printf("\t\tEnter Choice: ");
		scanf("%u", &choice);

		system("clear");

		 switch(choice)
		{
			case 1: load_alg_sequential();
				break;
			case 2: load_alg_conditional();
				break;
			case 3: load_alg_repetition();
				break;
			case 4: load_vectors();
				break;
			case 5: load_matrices();
				break;
			case 6: printf("\nQuitting program!\n");
				exit(FLAG);
				break;
			default: printf("\nInvalid choice!\n");
				break;
		}
	} while (choice != 6);
}


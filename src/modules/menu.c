
/* Libraries */
#include <stdio.h>
#include <stdlib.h>

/* Headers */
#include "../../headers/menu.h"

#include "../../headers/alg-conditional.h"
#include "../../headers/alg-sequential.h"
#include "../../headers/loop-algorithms/alg-loop-do-while.h"
#include "../../headers/loop-algorithms/alg-loop-for.h"
#include "../../headers/loop-algorithms/alg-loop-while.h"
#include "../../headers/vectors.h"
#include "../../headers/matrices.h"

/* Constant */
const int FLAG = 0;

/* Global variable */
unsigned int choice;

 void load_alg_loop (void)
{
	do
	{
		printf("\n\tLoop algorithms \n");
		printf("\nPlease choose one of the following options:\n");

		printf("___________________________________________\n\n");
		printf("1. Loop algorithms - For\n");
		printf("2. Loop algorithms - While\n");
		printf("3. Loop algorithms - Do While\n");
		printf("4. Return\n");
		printf("5. Exit\n");

		printf("___________________________________________\n\n");
		printf("\t\tEnter Choice: ");
		scanf("%u", &choice);

		system("clear");

		switch (choice)
		{
			case 1: load_alg_loop_for();
				break;
			case 2: load_alg_loop_while();
				break;
			case 3: load_alg_loop_do_while();
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
		printf("3. Loop algorithms\n");
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
			case 3: load_alg_loop();
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


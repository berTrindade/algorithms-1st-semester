
/* Libraries */
#include <stdio.h>
#include <stdlib.h>

/* Headers */
#include "../../headers/menu.h"
#include "../../headers/alg_sequential.h"
#include "../../headers/alg_conditional.h"
#include "../../headers/alg_repetition.h"

/* Constant */
const int FLAG = 0;

/* Global variable */
unsigned int choice;

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
		printf("4.Exit\n");

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
			case 4: printf("\n Quitting program!\n");
				exit(FLAG);
				break;
			default: printf("\n Invalid choice!\n");
				break;
		}
	} while (choice != 4);
}


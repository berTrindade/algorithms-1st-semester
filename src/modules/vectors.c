/* Libraries */
#include <stdio.h>
#include <stdlib.h>

/* Headers */
#include "../../headers/menu.h"
#include "../../headers/vectors.h"

static void first (void)
{
	const int LEN = 100;
	int value[LEN], largest;

	/* Stores number entered by user. */
	for (int i = 0; i < LEN; i++)
	{
		do
		{
			printf("Enter grade %d: ", i + 1);
			scanf("%d", &value[i]);

			if (value[i] < 0 || value[i] > 100)
				printf("Nota invalida");
		} while (value[i] < 0 || value[i] > 100);
	}

	//Consider first element as largest
	largest = value[0];

	/* Nao inicializa o for com 0 porque a posicao 0 ja foi colocado dentro de largest, ou seja, ja foi utilizada e nao e necessario comparar ela com ela mesma */

	/* Loop to find and store the largest number */
	for (int j = 1; j < LEN; j++)
	{
		if (value[j] > largest)
			largest = value[j];
	}

	// Print out the Result
	printf("\nLargest grade : %d\n", largest);
}

static void second (void)
{
	const int LEN = 5;
	int value[LEN], count = 0;

	/* Storing entered numbers */
	for (int i = 0; i < LEN; i++)
	{
		do
		{
			printf("Enter with the value %d: ", i + 1);
			scanf("%d", &value[i]);

			if (value[i] < -250 || value[i] > 350)
				printf("Invalid value\n");
		} while (value[i] < -250 || value[i] > 350);
	}

	/* Reading unchanged vector */
	printf("Unchanged vector: ");
	for (int j = 0; j < LEN; j++)
	{
		/* Writing value before check whether it is negative or not */
		printf("%4d", value[j]);

		/* Assign the value 999 to negative numbers */
		if (value[j] < 0)
		{
			value[j] = 999;
			count++;
		}
	}

	/* Reading changed vector */
	printf("\nChanged vector: ");
	for (int k = 0; k < LEN; k++)
		printf("%4d", value[k]);

	/* Number of values that were replaced */
	printf("\nQuantity of negative numbers that were turned into 999: %d", count);
}

static void third (void)
{
	const int LEN = 5;
	int values[LEN], odd[LEN], i = 0, j = 0;

	/* Store numbers */
	for (i = 0; i < LEN; i++)
	{
		do
		{
			printf("Enter with only positive numbers greater than zero: ");
			scanf("%d", &values[i]);

			if (values[i] <= 0)
				printf("Invalid value\n");
		} while (values[i] <= 0);
	}

	/* Reading unchanged vector */
	printf("Unchanged vector: ");
	for (i = 0; i < LEN; i++)
	{
		/* Print values of the vector */
		printf("%4d", values[i]);

		/* Check if the value whether it's odd or not */
		if (values[i]%2 != 0)
		{
			/* Storing odd numbers into a new vector */
			odd[j] = values[i];
			j++;
		}
	}

	if (j == 0)
		printf("\nOdd vector: There are no odd numbers inside original vector");
	else
	{
		/* Reading changed vector, in other words, it's for only odd numbers */
		printf("\nOdd vector: ");
		for (i = 0; i < j; i++)
			printf("%4d", odd[i]);
	}
}

static void fourth (void)
{
	const int SIZE = 10;
	int value[SIZE], i;

	for (i = 0; i < 5; i++)
	{
		printf("Enter with positive integers %d: ", i + 1);
		scanf("%d", &value[i]);

		//		if(i == 4)
		//		{
		//			for (i = 5; i < 10; i++)
		//				value[i] = value[i-5] * (i-3);
		//		}
	}

	for (i = 0; i < 5; i++)
		value[i+5] = value[i] * (i+2);

	printf("Values: ");
	for (i = 0; i < SIZE; i++)
		printf("%4d", value[i]);
}

static void fifth (void)
{
	const int SIZE = 8;
	float value[SIZE], average, adder = 0;

	for (int i = 0; i < SIZE; i++)
	{
		printf("Enter with the %d.o number: ", i + 1);
		scanf("%f", &value[i]);

		adder += value[i];
	}

	average = adder/SIZE;
	printf("\nAverage: %.2f", average);

	printf("\nValues greater than or equal to average are: ");
	for (int i = 0; i < SIZE; i++)
	{
		if (value[i] >= average)
			printf(" %.2f", value[i]);
	}
	printf("\n");
}

//Menu algoritmos sequenciais
void load_vectors (void)
{
	do
	{
		printf("\n\t../Vectors \n");
		printf("\nPlease choose one of the following options:\n");
		printf("_____________________________________________________\n\n");

		printf("1.-----------------------------------------------------\n");
		printf("2.-----------------------------------------------------\n");
		printf("3.-----------------------------------------------------\n");
		printf("4.-----------------------------------------------------\n");
		printf("5.-----------------------------------------------------\n");
		printf("6. Return\n");
		printf("7. Exit\n");

		printf("_____________________________________________________\n\n");
		printf("\t\tEnter Choice: ");
		scanf("%u", &choice);

		system("clear");

		 switch(choice)
		{
			case 1: first();
				break;
			case 2: second();
				break;
			case 3: third();
				break;
			case 4: fourth();
				break;
			case 5: fifth();
				break;
			case 6: load_menu();
				break;
			case 7: printf("\nQuitting program!\n");
				exit(FLAG);
				break;
			default: printf("\nInvalid choice!\n");
				break;
		}
	} while (choice != 11);
}

/* Libraries */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* Headers */
#include "../../headers/menu.h"
#include "../../headers/matrices.h"

static void first (void)
{
	const int COLS = 3, ROWS = 3;
	int matrix[COLS][ROWS], nines = 0, numbers[11] = {0};

	/* Reading matrix */
	printf("\nLeitura da Matriz\n" );
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			/* Validating input data */
			do
			{
				printf("Matrix[%d][%d]: ", i, j);
				scanf("%d", &matrix[i][j]);

				if (matrix[i][j] < 0 || matrix[i][j] > 10)
					printf("Apenas numeros entre 0 e 10!\n");

			} while (matrix[i][j] < 0 || matrix[i][j] > 10);
		}
	}

	/* Counting occurrence of 9 */
	for (int i = 0; i < COLS; i++)
	{
		for (int j = 0; j < ROWS; j++)
		{
			if (matrix[i][j] == 9)
				nines++;
		}
	}
	printf("\nA nota 9 aparece %d vezes na matriz\n", nines);

	/* Counting occurrence of all numbers */
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
			++numbers[matrix[i][j]];
	}

	/* Print occurrence of all numbers */
	for (int i = 0; i < 11; i++)
		printf("Nota %d: %d vezes\n", i, numbers[i]);

}

static void second (void)
{
	const int ROWS = 3, COLS = 3;
	int matrixA[ROWS][COLS], matrixB[ROWS][COLS];

	printf("\nLeitura da Matriz A: \n" );
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			printf("Matrix[%d][%d]: ", i, j);
			scanf("%d", &matrixA[i][j]);
		}
	}

	printf("\nLeitura da Matriz B: \n" );
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			printf("Matrix[%d][%d]: ", i, j);
			scanf("%d", &matrixB[i][j]);
		}
	}

	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			if (matrixA[i][j] == matrixB[i][j])
				printf("Numero: %d, na posicao: %d%d\n", matrixA[i][j], i, j);
		}
	}
}

static void third (void)
{
	const int COLS = 4, ROWS = 4;
	int matrixA[COLS][ROWS], matrixB[COLS][ROWS];
	bool ok = true;

	printf("\nLeitura matrix A:\n");
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			printf("MatrixA[%d][%d]: ", i, j);
			scanf("%d", &matrixA[i][j]);
		}
	}

	printf("\nLeitura matrix B:\n");
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			printf("MatrixB[%d][%d]: ", i, j);
			scanf("%d", &matrixB[i][j]);
		}
	}

	printf("\nComparando matrizes:\n");
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			ok = false;
			for (int k = 0; k < ROWS; k++)
			{
				/* Breaks loop of rows */
				if(ok == true) break;
				for (int l = 0; l < COLS; l++)
				{
					if (matrixA[i][j] == matrixB[k][l])
					{
						printf("\n%d aparece nas duas", matrixA[i][j]);
						ok = true;
						/* Breaks loop of columns */
						break;
					}
				}
			}
		}
	}
}

static void fourth (void)
{
	const int ROWS = 7, COLS = 5;
	float grades[ROWS][COLS], average[7], adder;

	for (int i = 0; i < ROWS; i++)
	{
		printf("\nAluno %d:\n", i);
		for (int j = 0; j < COLS; j++)
		{
			printf("Nota %d: ", j + 1);
			scanf("%f", &grades[i][j]);
		}
	}
	system("clear");

	for (int i = 0; i < ROWS; i++)
	{
		adder = 0;
		printf("\nAluno %d:\n", i);
		for (int j = 0; j < COLS; j++)
		{
			printf("Nota %d: %.2f\n", j + 1, grades[i][j]);
			adder += grades[i][j];
		}

		average[i] = adder/5;
		printf("Media: %.2f\n", average[i]);
	}
}


//Menu algoritmos sequenciais
void load_matrices (void)
{
	do
	{
		printf("\n\t../Matrices \n");
		printf("\nPlease choose one of the following options:\n");
		printf("_____________________________________________________\n\n");

		printf("1.-----------------------------------------------------\n");
		printf("2.-----------------------------------------------------\n");
		printf("3.-----------------------------------------------------\n");
		printf("4.-----------------------------------------------------\n");
		printf("5. Return...\n");
		printf("6. Exit\n");

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
			case 5: load_menu();
				break;
			case 6: printf("\n Quitting program!\n");
				exit(FLAG);
				break;
			default: printf("\n Invalid choice!\n");
				break;
		}
	} while (choice != 6);
}

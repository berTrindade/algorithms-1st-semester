
/* Libraries */
#include <stdio.h>
#include <stdlib.h>

/* Headers */
#include "../../headers/menu.h"
#include "../../headers/alg_repetition.h"

//Calcule a média dos números positivos digitados
static void exercise_one (void)
{

	int numero, contN, soma;
	float media;

	soma = 0;
	contN = 0;

	printf ("Numero: ");
	scanf("%d", &numero);

	while (numero > 0)
	{
		contN = contN+1;
		soma = soma + numero;

		printf ("Numero: ");
		scanf("%d", &numero);
	}

	media = soma/contN;
	printf ("Media:  %.2f\n",media);
}

//A soma dos primeiros 100 numeros inteiros
static void exercise_two(void)
{

	int somaNumero, i;
	somaNumero = 0;

	for(i=1; i<=100; i++)
		somaNumero = somaNumero +i;

	printf ("A soma dos primeiros 100 numeros inteiros e %d\n", somaNumero);

}

/*
 * Ler o código, número de horas trabalhadas e número de dependentes de cada funcionário.
 * Após a leitura, escreva qual o código, os valores descontados para cada tipo de imposto
 * e finalmente o salário líquido de cada um dos funcionários.
 * */
static void exercise_three(void)
{

	int i, codigo, Nhoras, Ndep;
	float INSS, IR, salario, salarioLiq;

	for( i=1; i<=3 ; i++) {
		printf ("Entre com o codigo: ");
		scanf("%d", &codigo);
		printf ("Entre com as horas: ");
		scanf("%d", &Nhoras);
		printf ("Entre com o numero de dependentes: ");
		scanf("%d", &Ndep);
		printf ("---------------------------------------");

		salario = (Nhoras*12) + (Ndep*40);
		INSS = salario *0.085;
		IR = salario * 0.05;
		salarioLiq = salario -INSS-IR;

		printf("\nCodigo %d \n", codigo);
		printf("Salario Bruto %.2f \n", salario);
		printf("Impostos %.2f (INSS) e %.2f (IR) \n", INSS, IR);
		printf ("Salario Liq = %.2f \n\n", salarioLiq);

	}

}

//Menu algoritmos de repetiçao
void load_alg_repetition(void)
{
	do
	{
		printf("\n\t../Conditional Algorithms \n");
		printf("\nPlease choose one of the following options:\n");

		printf("_____________________________________________________\n\n");
		printf("1. Calcule a média dos números positivos digitados...\n");
		printf("2. A soma dos primeiros 100 numeros inteiros.\n");
		printf("3. ...Escreva qual o código, os valores descontados para cada..\n");
		printf("4. Return...\n");
		printf("5.Exit\n");

		printf("_____________________________________________________\n\n");
		printf("\t\tEnter Choice: ");
		scanf("%u", &choice);

		system("clear || cls");

		switch(choice)
		{
			case 1: exercise_one();
				break;
			case 2: exercise_two();
				break;
			case 3: exercise_three();
				break;
			case 4: load_menu();
				break;
			case 5: printf("\n Quitting program!\n");
			exit(FLAG);
				break;
			default: printf("\n Invalid choice!\n");
				break;
		}
	} while (choice != 5);
}













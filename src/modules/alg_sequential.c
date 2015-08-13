
/* Libraries */
#include <stdio.h>
#include <stdlib.h>

/* Headers */
#include "../../headers/menu.h"
#include "../../headers/alg_sequential.h"

//Write an algorithm for swap between each other the values of two variables A and B.
static void exercise_one(void)
{
	int a, b, aux;

	printf("Fill in the value of A: ");
	scanf("%d", &a);

	printf("Fill in the value of B: ");
	scanf("%d", &b);

	aux = a;
	a = b;
	b = aux;

	printf("The A value it's of %d and the B value it's of %d\n", a, b);
}

//Calculate the value of one installment in arrears
static void exercise_two(void)
{

	int time;
	float vlr_installment, rate, value;

	printf("Inform the installment's value: R$ ");
	scanf("%f", &value);

	printf("Inform the time which the installment it's arrear: ");
	scanf("%d", &time);

	printf("Inform the interest rate: ");
	scanf("%f", &rate);

	vlr_installment = value + (value * (rate/100) * time);
	printf("The installment's value it's of: R$ %.2f\n", vlr_installment);

}

//Show the number and salary of the employee
static void exercise_three(void)
{
	int id_seller, cod_workpiece, amt_sold;
	float unit_prince, tlv_sale, commission;

	printf("Inform the seller's ID: ");
	scanf("%d", &id_seller);

	printf("Inform the workpiece code: ");
	scanf("%d", &cod_workpiece);

	printf("Inform the amount sold: ");
	scanf("%d", &amt_sold);

	printf("Inform the unit price: R$ ");
	scanf("%f", &unit_prince);

	tlv_sale = unit_prince * amt_sold;
	commission = tlv_sale * 0.05;

	printf("The seller's ID is nº %d and he sold R$ %.2f and win R$ %.2f.\n", id_seller, tlv_sale, commission);

}

//Enter with the base and height of a rectangle
static void exercise_four(void)
{

	float base, height, perimeter, area;

	printf("Input the rectangle's base: ");
	scanf("%f", &base);

	printf("Input the rectangle's height: ");
	scanf("%f", &height);

	perimeter = (base + height)*2;
	area = base * height;

	printf("Este retângulo é de area %.2f e perimetro %.2f\n", area, perimeter);

}
//Lê o saldo de uma aplicação e imprima o novo saldo
static void exercise_five(void)
{

	float sld_atual, sld_novo;

	printf("Informe o saldo atual");
	scanf("%f", &sld_atual);

	sld_novo = sld_atual + (sld_atual * 0.01);

	printf("O valor do saldo com reajust é de: %.2f\n", sld_novo);

}

//Ler um número e mostrar a terça parte deste número
static void exercise_six(void)
{

	int numero;
	float terca_parte;

	printf("Digite um numero: ");
	scanf("%d", &numero);

	terca_parte = (float)numero/3;
	printf("A terca parte do numero %d é de: %.2f\n", numero, terca_parte);

}

//Menu algoritmos sequenciais
void load_alg_sequential(void)
{
	do
	{
		printf("\n\t../Sequential Algorithms \n");
		printf("\nPlease choose one of the following options:\n");

		printf("_____________________________________________________\n\n");
		printf("1. Trocar entre si os valores de duas variáveis A e B.\n");
		printf("2. Calcule o valor de uma prestação em atraso.\n");
		printf("3. Mostrar o número e o salário do funcionário.\n");
		printf("4. Entre com a base e a altura de um retângulo.\n");
		printf("5. Lê o saldo de uma aplicação e imprima o novo saldo.\n");
		printf("6. Ler um número e mostrar a terça parte deste número.\n");
		printf("7. Return...\n");
		printf("8.Exit\n");

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
			case 4: exercise_four();
				break;
			case 5: exercise_five();
				break;
			case 6: exercise_six();
				break;
			case 7: load_menu();
				break;
			case 8: printf("\n Quitting program!\n");
				exit(FLAG);
				break;
			default: printf("\n Invalid choice!\n");
				break;
		}
	} while (choice != 8);
}










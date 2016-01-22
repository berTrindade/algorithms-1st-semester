
/* Libraries */
#include <stdio.h>
#include <stdlib.h>

/* Headers */
#include "../../headers/menu.h"
#include "../../headers/alg-sequential.h"

/* Mostrar na tela o produto entre 28 e 43 */
static void first (void)
{
	int result;

	result = 43 + 28;
	printf("The product of 43 + 28 is: %d.\n", result);
}

/* Mostrar a média aritmética entre 3 números passados pelo usuário */
static void second (void)
{
	float first, second, third, mean;

	printf("First grade: ");
	scanf("%f", &first);

	printf("Second grade: ");
	scanf("%f", &second);

	printf("Third grade: ");
	scanf("%f", &third);

	mean = (first + second + third)/3;
	printf("\nArithmetic mean: %.2f.\n", mean);
}

/* Lê um número e mostra seu sucessor e seu antecessor na tela */
static void third (void)
{
	int number, predecessor, successor;

	printf("Inform a number: ");
	scanf("%d", &number);

	predecessor = number++;
	successor = number--;

	printf("The predecessor is: %d and the successor is: %d\n", predecessor, successor);
}

/* Lê dois números e mostra a soma */
static void fourth(void)
{
	int first, second, sum;

	printf("Enter two numbers to add: ");
	scanf("%d %d", &first, &second);

	sum = first + second;
	printf("The sum of %d and %d is: %d\n", first, second, sum);
}

/* Lê um número e mostra a terça parte deste número */
static void fifth (void)
{
	float number, third_part;

	printf("Inform a number: ");
	scanf("%f", &number);

	third_part = number/3;
	printf("Third part of %.1f is: %.1f\n", number, third_part);
}

/* Lê dois números e mostre os seguintes resultados: divisão do primeiro pelo segundo */
static void sixth (void)
{
	float first, second, result;

	printf("Enter two numbers to divide: ");
	scanf("%f %f", &first, &second);

	result = first/second;
	printf("The division product between %.2f and %.2f is: %.2f", first, second, result);
}

/* Leia 4 números e mostre a média ponderada, sabendo-se que os pesos são respectivamente: 1, 2, 3 e 4 */
static void seventh (void)
{
	float first, second, third, fourth, mean;

	printf("Enter four numbers: ");
	scanf("%f %f %f %f", &first, &second, &third, &fourth);

	mean = (first*1 + second*2 + third*3 + fourth*4)/10;
	printf("Weighted mean: %.2f\n", mean);
}

/* Lê o saldo de uma aplicação e imprima o novo saldo, considerado o reajuste de 1% */
static void eighth (void)
{
	/* How to calculate increase percentage:
	 * Add the decimal value of the percentage increase to the decimal value of 100%, in another words 1. For example, 0.30 (30%) + 1 (100%) = 1.30 (130%).
	 * Then, finally, multiple the last result and multiply it for the "old" salary. For example, 1500 * 1.30 = 1950.
	 * -----------------------------------------------------------------------------------------------------------------------------
	 * Another reasoning to be follow is, for example, being 30% of 200, the same as 0,30 * 200 = 60, the final result is the sum 200 + 60 = 260.
	 */

	const float READJUSTMENT = 1.01;
	float balance, new_balance;

	printf("Inform current balance: R$ ");
	scanf("%f", &balance);

	new_balance = balance * READJUSTMENT;
	printf("After readjustments your current balance is: R$ %.2f\n", new_balance);
}

 /* Entre com a base e a altura de um retângulo e mostre os resultados:
  * Perímetro (Perímetro é igual à soma dos 4 lados)
  * Área (Área é igual à base vezes altura)
  */
static void ninth (void)
{
	float base, height, perimeter, area;

	printf("Base of the rectangle: ");
	scanf("%f", &base);

	printf("Height of the rectangle: ");
	scanf("%f", &height);

	perimeter = (base + height) * 2;
	area = base * height;

	printf("The perimeter is: %.2f and the area is %.2f\n", perimeter, area);
}

/* Lê o raio de um círculo e mostre como saída o perímetro (2*π*Raio) e a área (π*Raio2) */
static void tenth (void)
{
	const float PI = 3.1415;
	float radius, perimeter, area;

	printf("Enter the circle's radius: ");
	scanf("%f", &radius);

	perimeter = 2*(PI*radius);
	area = PI*(radius*radius);

	printf("The circle's area is: %.2f and the perimeter is: %.2f\n", area, perimeter);
}

/* Calcule e mostre a área de um triângulo (área é igual a (base x altura) dividido por 2) */
static void eleventh (void)
{
	float area, base, height;

	printf("Enter triangle's base: ");
	scanf("%f", &base);

	printf("Enter triangle's height: ");
	scanf("%f", &height);

	area = (base*height)/2;
	printf("The triangle's area is: %.2f", area);
}

/* Calcule o valor de uma prestação em atraso, utilizando a fórmula: PRESTAÇÃO = VALOR + (VALOR * (TAXA/100) * TEMPO) */
static void twelfth (void)
{
	int time;
	float value, installment, rate;

	printf("Inform value: ");
	scanf("%f", &value);

	printf("Inform time(days): ");
	scanf("%d", &time);

	printf("Inform rate: ");
	scanf("%f", &rate);

	installment = value + (value * (rate/100) * time);
	printf("The installment's value in arrears is: R$ %.2f", installment);
}

/*
 * Construa um algoritmo que :
 * Leia a cotação do dólar,
 * Leia um valor em dólares
 * Converta esse valor para Real,
 * Mostre o resultado
 */
static void thirteenth (void)
{
	const float DOLLAR_QUOTATION = 3.4991;
	float vlr_dolar, vlr_real;

	printf("Enter a value in dollars: $ ");
	scanf("%f", &vlr_dolar);

	vlr_real = vlr_dolar * DOLLAR_QUOTATION;
	printf("The value %.2f, in dollars, is equivalent to: R$ %.2f.", vlr_dolar, vlr_real);
}

/*
 * Desenvolva algoritmo que:
· Leia 4 (quatro) números
· Calcule o quadrado para cada um
· Somem todos e
· Mostre o resultado
 */
static void fourtenth (void)
{
	int first, second, third, fourth, sum;

	printf("First number: ");
	scanf("%d", &first);

	printf("Second number: ");
	scanf("%d", &second);

	printf("Third number: ");
	scanf("%d", &third);

	printf("Fourth number: ");
	scanf("%d", &fourth);

	sum = (first * first) + (second * second) + (third * third) + (fourth * fourth);
	printf("The result of the sum of squares is: %d\n", sum);
}

/*
 * Construa um algoritmo para pagamento de comissão de vendedores de peças, levando-se
em consideração que sua comissão será de 5% do total da venda e que você tem os
seguintes dados:
· Identificação do vendedor
· Código da peça
· Preço unitário da peça
· Quantidade vendida
 */
static void fifteenth (void)
{
	float piece_price, commission, tlt_sale;
	int salesman_ID, piece_ID, sold_qty;

	printf("Enter salesman's ID: ");
	scanf("%d", &salesman_ID);

	printf("Enter piece's ID: ");
	scanf("%d", &piece_ID);

	printf("Enter piece's price: R$ ");
	scanf("%f", &piece_price);

	printf("Enter sold quantity: ");
	scanf("%d", &sold_qty);

	tlt_sale = sold_qty * piece_price;
	commission =  tlt_sale * 0.05;

	printf("The salesman ID %d due to his total sale equivalent to R$ %.2f will receive R$ %.2f of commission in his payment.\n", salesman_ID, tlt_sale, commission);
}

/*
 * Desenvolva um algoritmo que lê o peso da carne que será vendida e
   preço por quilo. O algoritmo deve calcular e imprimir na tela o total a pagar,
   o valor pago ao ICMS (17%) e o lucro líquido do açougue.
 */
static void sixteenth (void)
{
	float meat_kg, meat_weight, tlt_sale, icms, lqd_value;

	printf("Enter meat's weight: ");
	scanf("%f", &meat_weight);

	printf("Enter meat's price (kilograms): ");
	scanf("%f", &meat_kg);

	tlt_sale = meat_weight * meat_kg;
	icms = tlt_sale * 0.017;
	lqd_value = tlt_sale - icms;

	printf("Total: R$ %.2f, ICMS: R$ %.2f, liquid value: R$ %.2f.\n", tlt_sale, icms, lqd_value);
}

/* Escreva um algoritmo para trocar entre si os valores de duas variáveis A e B. */
static void seventeenth (void)
{
	int a, b, aux;

	printf("Value of A: ");
	scanf("%d", &a);

	printf("Value of B: ");
	scanf("%d", &b);

	aux = a;
	a = b;
	b = aux;

	printf("Value of A: %d and B: %d.\n", a, b);
}

/*
 * Escreva um algoritmo que leia os dados para o parafuso A e para o parafuso B, isto é, o código,
 * a quantidade de peças e o valor unitário de cada parafuso e a porcentagem de IPI (única) a ser acrescentada.
 * Calcule e escreva o valor total a ser pago para cada peça e o valor total geral.
 */
static void eighteenth (void)
{
	int screwA_ID, screwB_ID, screwA_qtd, screwB_qtd;
	float screwA_UValue, screwB_UValue, ipi, screwA_tlt, screwB_tlt, tlt_value;

	printf("Screw A's ID: ");
	scanf("%d", &screwA_ID);

	printf("Screw B's ID: ");
	scanf("%d", &screwB_ID);

	printf("Screw A's quantity: ");
	scanf("%d", &screwA_qtd);

	printf("Screw B's quantity: ");
	scanf("%d", &screwB_qtd);

	printf("Screw A's unit value: R$ ");
	scanf("%f", &screwA_UValue);

	printf("Screw B's unit value: R$ ");
	scanf("%f", &screwB_UValue);

	printf("IPI percentage: ");
	scanf("%f", &ipi);

	screwA_tlt = screwA_qtd * screwA_UValue;
	screwA_tlt = screwA_tlt + (screwA_tlt * ipi)/100; //ou tlt_A = (qtd_A * valorU_A)*(IPI/100+1)

	screwB_tlt = screwB_qtd * screwB_UValue;
	screwB_tlt = screwB_tlt + (screwB_tlt * ipi)/100;

	tlt_value = screwA_tlt * screwB_tlt;
	printf("Screw A's total value: R$ %.2f. Screw B's total value: R$ %.2f. Total value: R$ %.2f.\n", screwA_tlt, screwB_tlt, tlt_value);
}

/* Calcular e apresentar o volume de uma lata de óleo, considerando o Volume=3,14159*R^2*Altura */
static void nineteenth (void)
{
	const float PI = 3.14159;
	float radius, height, volume;

	printf("Enter radius: ");
	scanf("%f", &radius);

	printf("Enter height: ");
	scanf("%f", &height);

	volume = (PI * (radius * radius)) * height;
	printf("The volume of an Oil can is: %f", volume);
}

/* Faça um algoritmo que leia as 3 notas de um aluno e calcule a média final deste aluno.
 * Considerar que a média é ponderada e que o peso das notas é: 2,3 e 5, respectivamente.
 */
static void twentieth (void)
{
	float first, second, third, mean;

	printf("First grade: ");
	scanf("%f", &first);

	printf("Second grade: ");
	scanf("%f", &second);

	printf("Third grade: ");
	scanf("%f", &third);

	mean = (first*2 + second*3 + third*5) / 10;
	printf("Weighted mean: %.2f", mean);
}

/*
 * O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do distribuidor e dos impostos (aplicados ao custo de fábrica).
 * Supondo que a percentagem do distribuidor seja de 28% e os impostos de 45%, escrever um algoritmo que leia o custo de fábrica de um carro e escreva o custo ao consumidor.
 */
static void twenty_first (void)
{
	float factoryCost, customerCost, distroPercentage, tax;

	printf("Enter Car's factory cost: R$ ");
	scanf("%f", &factoryCost);

	distroPercentage = factoryCost * 1.28;
	tax = factoryCost * 1.45;

	customerCost = customerCost + distroPercentage + tax;
	printf("The Customer's cost is: R$ %f", customerCost);
}

/* Faça um algoritmo que leia o tempo de duração de um evento em uma fábrica expressa em segundos e mostre-o expresso em horas, minutos. */
static void twenty_second (void)
{
	int hours, minutes, seconds;

	printf("Enter duration time (in seconds): ");
	scanf("%d", &seconds);

	hours = (int)(seconds/3600);
	minutes = (int)(seconds/60);

	printf("Event duration time is (HH:SS): %d: %d", hours, minutes);
}

/*
 * Escreva um algoritmo que leia o número de um funcionário, seu número de horas trabalhadas, o valor que recebe por hora e calcula o salário desse funcionário.
 * A seguir, mostre o número e o salário do funcionário.
 */
static void twenty_third (void)
{
	int employee_ID, workedHours;
	float hoursValue, salary;

	printf("Employee's ID: ");
	scanf("%d", &employee_ID);

	printf("Employee's Worked hours: ");
	scanf("%d", &workedHours);

	printf("Hours' value: ");
	scanf("%f", &hoursValue);

	salary = hoursValue * workedHours;
	printf("The employee ID %d will receive R$ %.2f as payment.\n", employee_ID, salary);
}

/*
 * Escrever um algoritmo que leia o codigo de um vendedor, o seu salário fixo e o total de vendas efetuadas por ele no mês (em dinheiro).
 * Sabendo que este vendedor ganha 15% de comissão sobre suas vendas efetuadas, informar o seu salário no final do mês.
 * Desconte também 8% de INSS e 6% de auxílio transporte.
 */
static void twenty_fourth (void)
{
	int salesman_ID;
	float fix_salary, tlt_sale, inss, transit_pass, lqd_salary;

	printf("Salesman's ID: ");
	scanf("%d", &salesman_ID);

	printf("Fix salary: R$ ");
	scanf("%f", &fix_salary);

	printf("Total of sales in this month: R$ ");
	scanf("%f", &tlt_sale);

	inss = fix_salary * 0.08;
	transit_pass = fix_salary * 0.06;

	lqd_salary = (((tlt_sale * 1.15) + fix_salary) - inss) - transit_pass;
	printf("The employee ID %d will receive R$ %.2f as payment at the end of the month.\n", salesman_ID, lqd_salary);
}


//Menu algoritmos sequenciais
void load_alg_sequential (void)
{
	do
	{
		printf("\n\t../Sequential Algorithms\n");
		printf("\nPlease choose one of the following options:\n");
		printf("_____________________________________________________\n\n");

		printf("1.Exercise - 01\n");
		printf("2.Exercise - 02\n");
		printf("3.Exercise - 03\n");
		printf("4.Exercise - 04\n");
		printf("5.Exercise - 05\n");
		printf("6.Exercise - 06\n");
		printf("7.Exercise - 07\n");
		printf("8.Exercise - 08\n");
		printf("9.Exercise - 09\n");
		printf("10.Exercise - 10\n");
		printf("11.Exercise - 11\n");
		printf("12.Exercise - 12\n");
		printf("13.Exercise - 13\n");
		printf("14.Exercise - 14\n");
		printf("15.Exercise - 15\n");
		printf("16.Exercise - 16\n");
		printf("17.Exercise - 17\n");
		printf("18.Exercise - 18\n");
		printf("19.Exercise - 19\n");
		printf("20.Exercise - 20\n");
		printf("21.Exercise - 21\n");
		printf("22.Exercise - 22\n");
		printf("23.Exercise - 23\n");
		printf("24.Exercise - 24\n");
		printf("25.Return\n");
		printf("26.Exit\n");

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
			case 6: sixth();
				break;
			case 7: seventh();
				break;
			case 8: eighth();
				break;
			case 9: ninth();
				break;
			case 10: tenth();
				break;
			case 11: eleventh();
				break;
			case 12: twelfth();
				break;
			case 13: thirteenth();
				break;
			case 14: fourtenth();
				break;
			case 15: fifteenth();
				break;
			case 16: sixteenth();
				break;
			case 17: seventeenth();
				break;
			case 18: eighteenth();
				break;
			case 19: nineteenth();
				break;
			case 20: twentieth();
				break;
			case 21: twenty_first();
				break;
			case 22: twenty_second();
				break;
			case 23: twenty_third();
				break;
			case 24: twenty_fourth();
				break;
			case 25: load_menu();
				break;
			case 26: printf("\nQuitting program!\n");
				exit(FLAG);
				break;
			default: printf("\nInvalid choice!\n");
				break;
		}
	} while (choice != 26);
}










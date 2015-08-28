
/* Libraries */
#include <stdio.h>
#include <stdlib.h>

/* Headers */
#include "../../headers/menu.h"
#include "../../headers/alg_sequential.h"

static void first (void)
{
	int result;

	result = 43 + 28;
	printf("The product of 43 + 28 is: %d\n", result);
}

static void second (void)
{
	float first_grade, second_grade, third_grade, mean;

	printf("Inform the first grade: ");
	scanf("%f", &first_grade);

	printf("Inform the second grade: ");
	scanf("%f", &second_grade);

	printf("Inform the third grade: ");
	scanf("%f", &third_grade);

	mean = (first_grade + second_grade + third_grade)/3;
	printf("The arithmetic mean is: %.2f", mean);

}

static void third (void)
{
	int number, antecessor, sucessor;

	printf("Informe a number: ");
	scanf("%d", &number);

	antecessor = number + 1;
	sucessor = number - 1;

	printf("O antecessor e %d e o sucessor e %d\n", antecessor, sucessor);
}

static void fourth(void)
{
	int a, b, soma;

	printf("Informe o numero: ");
	scanf("%d", &a);

	printf("Informe o numero: ");
	scanf("%d", &b);

	soma = a + b;
	printf("A soma de %d + %d = %d\n", a, b, soma);
}

static void fifth (void)
{
	float numero, terca_parte;

	printf("Informe um numero: ");
	scanf("%f", &numero);

	terca_parte = numero/3;
	printf("A terca parte do numero %.1f e %.1f", numero, terca_parte);
}

static void sixth (void)
{
	float first_number, second_number, result;

	printf("Informe o primeiro numero: ");
	scanf("%f", &first_number);

	printf("Informe o segundo numero: ");
	scanf("%f", &second_number);

	result = first_number/second_number;
	printf("O produto da divisao entre %.2f e %.2f e %.2f", first_number, second_number, result);
}

static void seventh (void)
{
	float first_grade, second_grade, third_grade, fourth_grade, mean;

	printf("Informe o primeiro numero: ");
	scanf("%f", &first_grade);

	printf("Informe o segundo numero: ");
	scanf("%f", &second_grade);

	printf("Informe o primeiro numero: ");
	scanf("%f", &third_grade);

	printf("Informe o segundo numero: ");
	scanf("%f", &fourth_grade);

	mean = (first_grade*1 + second_grade*2 + third_grade*3 + fourth_grade*4)/10;
	printf("A media ponderada e %.2f\n	: ", mean);
}

static void eighth (void)
{
	/*
	 * Somar o valor decimal da porcentagem do aumento ao valor decimal de 100%, ou seja 1. Ex: 0.30 (30%) + 1 (100%) = 1.30 (130%);
	 * Aí, finalmente, multiplicar o resultado anterior e multiplicá-lo pelo salário "antigo". Ex: 1500 * 1.30 = 1950.
	 * -----------------------------------------------------------------------------------------------------------------------------
	 * Outro racinío a ser seguido é, por exemplo:
	 * Sendo 30% de 200 o mesmo que 0,30 * 200 = 60, o resultado final é a soma 200 + 60 = 260.
	 */
	const float REAJUSTE = 1.01;
	float saldo, new_saldo;

	printf("Informe o saldo atual: R$ ");
	scanf("%f", &saldo);

	new_saldo = saldo * REAJUSTE;
	printf("Apos reajustado seu valor e: R$ %.2f\n", new_saldo);
}

static void ninth (void)
{
	float base, altura, perimetro, area;

	printf("Base do retangulo: ");
	scanf("%f", &base);

	printf("Altura do retangulo: ");
	scanf("%f", &altura);

	perimetro = (base + altura) * 2;
	area = base * altura;

	printf("O perimetro e %.2f e a area %.2f\n", perimetro, area);
}

static void tenth (void)
{
	const float PI = 3.1415;
	float raio, perimetro, area;

	printf("Informe o raio do circulo: ");
	scanf("%f", &raio);

	perimetro = 2*(PI*raio);
	area = PI*(raio*raio);

	printf("A area do circulo e: %.2f e o perimetro e %.2f\n", area, perimetro);
}

static void eleventh (void)
{
	float area, base, altura;

	printf("Informe a base do triangulo: ");
	scanf("%f", &base);

	printf("Informe a altura do triangulo: ");
	scanf("%f", &altura);

	area = (base*altura)/2;
	printf("A area do triangulo e: %.2f", area);
}

static void twelfth (void)
{
	int tempo;
	float valor, prestacao, taxa;

	printf("Informe o valor: ");
	scanf("%f", &valor);

	printf("Informe o tempo(dias): ");
	scanf("%d", &tempo);

	printf("Informe a taxa: ");
	scanf("%f", &taxa);

	prestacao = valor + (valor * (taxa/100) * tempo);
	printf("O valor da prestacao em atraso e de: R$ %.2f", prestacao);
}

static void thirteenth (void)
{
	const float DOLLAR_QUOTATION = 3.4991;
	float vlr_dolar, vlr_real;

	printf("Informe um valor em dolares: $ ");
	scanf("%f", &vlr_dolar);

	vlr_real = vlr_dolar * DOLLAR_QUOTATION;
	printf("O valor %.2f, em dolares, equivale a %.2f", vlr_dolar, vlr_real);
}

static void fourtennth (void)
{
	int numero_1, numero_2, numero_3, numero_4, soma;

	printf("Insira o primeiro numero: ");
	scanf("%d", &numero_1);

	printf("Insira o primeiro numero: ");
	scanf("%d", &numero_2);

	printf("Insira o primeiro numero: ");
	scanf("%d", &numero_3);

	printf("Insira o primeiro numero: ");
	scanf("%d", &numero_4);

	soma = ((numero_1 * numero_1) + (numero_2 * numero_2) + (numero_3 * numero_3) + (numero_4 * numero_4));
	printf("O resultado da soma dos quadrados e: %d", soma);
}

static void fifteenth (void)
{
	float preco_peca, comissao, tlt_venda;
	int id_vendedor, id_peca, qtd_vendida;

	printf("Informe o codigo do vendedor: ");
	scanf("%d", &id_vendedor);

	printf("Informe o codigo da peca: ");
	scanf("%d", &id_peca);

	printf("Informe o preco da peca: ");
	scanf("%f", &preco_peca);

	printf("Informe a quantidade vendida: ");
	scanf("%d", &qtd_vendida);

	tlt_venda = qtd_vendida * preco_peca;
	comissao =  tlt_venda * 0.05;

	printf("O funcionario cod. %d, devido ao total de vendas de %.2f, ira receber %.2f de comissao no seu pagamento\n", id_vendedor, tlt_venda, comissao);
}

static void sixteenth (void)
{
	float meat_price_per_kg, meat_weight, tlt_venda, icms, lq_value;

	printf("Informe o peso da carne: ");
	scanf("%f", &meat_weight);

	printf("Informe o preco da carne por kilo: ");
	scanf("%f", &meat_price_per_kg);

	tlt_venda = meat_weight * meat_price_per_kg;
	icms = tlt_venda * 0.017;
	lq_value = tlt_venda - icms;

	printf("Total a pagar: R$ %.2f ICMS: R$ %.2f, Valor liquido a pagar: R$ %.2f\n", tlt_venda, icms, lq_value);
}

static void seventeenth (void)
{
	int a, b, aux;

	printf("Valor de A: ");
	scanf("%d", &a);

	printf("Valor de B: ");
	scanf("%d", &b);

	aux = a;
	a = b;
	b = aux;

	printf("Valor de A: %d, B: %d\n", a, b);
}

static void eighteenth (void)
{
	int id_A, id_B, qtd_A, qtd_B;
	float valorU_A, valorU_B, IPI, tlt_A, tlt_B, tlt_geral;

	printf("Codigo A: ");
	scanf("%d", &id_A);

	printf("Codigo B: ");
	scanf("%d", &id_B);

	printf("Quantidade A: ");
	scanf("%d", &qtd_A);

	printf("Quantidade B: ");
	scanf("%d", &qtd_B);

	printf("Valor unitario A: ");
	scanf("%f", &valorU_A);

	printf("Valor unitario B: ");
	scanf("%f", &valorU_B);

	printf("Valor IPI: ");
	scanf("%f", &IPI);

	tlt_A = qtd_A * valorU_A;
	tlt_A = tlt_A + ((tlt_A * IPI)/100); //ou tlt_A = (qtd_A * valorU_A)*((IPI/100)+1)

	tlt_B = qtd_B * valorU_B;
	tlt_B = tlt_B + ((tlt_B * IPI)/100);

	tlt_geral = tlt_A * tlt_B;
	printf("Valor total de A: %.2f. Valor total de B: %.2f. Valor total geral: %.2f", tlt_A, tlt_B, tlt_geral);
}

static void nineteenth (void)
{
	const float PI = 3.14159;
	float raio, altura, volume;

	printf("Raio: ");
	scanf("%f", &raio);

	printf("altura: ");
	scanf("%f", &altura);

	volume = (PI * (raio * raio)) * altura;
	printf("Volume: %f", volume);
}

static void twentieth (void)
{
	float nota_1, nota_2, nota_3, media;

	printf("Nota 1: ");
	scanf("%f", &nota_1);

	printf("Nota 2: ");
	scanf("%f", &nota_2);

	printf("Nota 3: ");
	scanf("%f", &nota_3);

	media = (nota_1 * 2 + nota_2 * 3 + nota_3 * 5) / 10;
	printf("Media: %.2f", media);
}

static void twenty_first (void)
{
	float custo_Fabrica, custo_consumidor, porcentagem_Distribuidor, imposto;

	printf("Custo de Fabrica: ");
	scanf("%f", &custo_Fabrica);

	porcentagem_Distribuidor = custo_Fabrica * 1.28;
	imposto = custo_Fabrica * 1.45;

	custo_consumidor = custo_Fabrica + porcentagem_Distribuidor + imposto;
	printf("Custo consumidor: %f", custo_consumidor);
}

static void twenty_second (void)
{
	int horas, minutos, segundos;

	printf("Tempo em segundos: ");
	scanf("%d", &segundos);

	horas = (int)(segundos/3600);
	minutos = (int)(segundos/60);

	printf("Tempo: %d : %d", horas, minutos);
}

static void twenty_third (void)
{
	int numero, horas;
	float vlr_hora, salario;

	printf("Numero funcionario: ");
	scanf("%d", &numero);

	printf("Numero de horas: ");
	scanf("%d", &horas);

	printf("Valor horas: ");
	scanf("%f", &vlr_hora);

	salario = vlr_hora * horas;
	printf("O salario do funcionario numero %d e %.2f", numero, salario);
}

static void twenty_fourth (void)
{
	int codV;
	float sl_fixo, tlt_salario;

	printf("Numero vendedor: ");
	scanf("%d", &codV);

	printf("Salario fixo: ");
	scanf("%f", &sl_fixo);

	printf("Total de vendas em dinheiro no mês:");
	scanf("%f", &tlt_salario);

	sl_fixo = (tlt_salario * 1.15) + sl_fixo;
	printf("O salario final do vendedor e %.2f", sl_fixo);
}


//Menu algoritmos sequenciais
void load_alg_sequential(void)
{
	do
	{
		printf("\n\t../Sequential Algorithms \n");
		printf("\nPlease choose one of the following options:\n");
		printf("_____________________________________________________\n\n");

		printf("1.-----------------------------------------------------\n");
		printf("2.-----------------------------------------------------\n");
		printf("3.-----------------------------------------------------\n");
		printf("4.-----------------------------------------------------\n");
		printf("5.-----------------------------------------------------\n");
		printf("6.-----------------------------------------------------\n");
		printf("7.-----------------------------------------------------\n");
		printf("8.-----------------------------------------------------\n");
		printf("9.-----------------------------------------------------\n");
		printf("10.----------------------------------------------------\n");
		printf("11.--------------------------------------------------- \n");
		printf("12.--------------------------------------------------- \n");
		printf("13.--------------------------------------------------- \n");
		printf("14.--------------------------------------------------- \n");
		printf("15.--------------------------------------------------- \n");
		printf("16.--------------------------------------------------- \n");
		printf("17.--------------------------------------------------- \n");
		printf("18.--------------------------------------------------- \n");
		printf("19.--------------------------------------------------- \n");
		printf("20.--------------------------------------------------- \n");
		printf("21.--------------------------------------------------- \n");
		printf("22.--------------------------------------------------- \n");
		printf("23.--------------------------------------------------- \n");
		printf("24.--------------------------------------------------- \n");
		printf("25. Return...\n");
		printf("26.Exit\n");

		printf("_____________________________________________________\n\n");
		printf("\t\tEnter Choice: ");
		scanf("%u", &choice);

		system("clear || cls");

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
			case 14: fourtennth();
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
			case 26: printf("\n Quitting program!\n");
				exit(FLAG);
				break;
			default: printf("\n Invalid choice!\n");
				break;
		}
	} while (choice != 26);
}










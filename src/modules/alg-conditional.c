
// Libraries
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// Headers
#include "../../headers/menu.h"
#include "../../headers/alg-conditional.h"

static void first (void)
{
	float nota[3] = {0.0};
	float media = 0.0;

	printf("Digite a 1ª nota: ");
	scanf("%f", &nota[0]);

	printf("Digite a 2ª nota: ");
	scanf("%f", &nota[1]);

	printf("Digite a 3ª nota: ");
	scanf("%f", &nota[2]);

	media = (nota[0] + nota[1] + nota[2])/3;

	// If-Else Condition
	if (media >= 7.0)
		printf("APROVADO");
	else
		printf("REPROVADO");
}

static void second (void)
{
	int numero[2];

	printf("Valor 1: ");
	scanf("%d", &numero[0]);

	printf("Valor 2: ");
	scanf("%d", &numero[1]);

	/* Nested-If conditions */
	if (numero[0] != numero[1])
	{
		if (numero[0] > numero[1])
			printf("%d", numero[0]);
		else
			printf("%d", numero[1]);
	} else
		printf("Numeros iguais");
}

static void third (void)
{
	int idade;

	printf("Informe a idade do nadador: ");
	scanf("%d", &idade);

	/* If-Else-If condition */
	if ((idade >= 5) && (idade <= 7))
		printf("Infantil A");

	else if ((idade >= 8) && (idade <= 10))
		printf("Infantil B");

	else if ((idade >= 11) && (idade <= 13))
		printf("Juvenil A");

	else if ((idade >= 14) && (idade <= 17))
		printf("Juvenil B");

	else if (idade > 18)
		printf("Adulto");

	else
		printf("Sem categoria");
}

static void fourth (void)
{
	int pedido, qtde;
	float total;

    printf("===============================\n");
    printf("----BEM-VINDO A LANCHONETE-----\n");
    printf("===============================\n");

	printf("100 - Cachorro quente..R$ 2.50\n");
	printf("101 - Bauru simples....R$ 4.75\n");
	printf("102 - Bauru c/ovo......R$ 5.20\n");
	printf("103 - Hamburger........R$ 3.90\n");
	printf("104 - Cheeseburger.....R$ 4.20\n");
	printf("105 - Refrigerante.....R$ 1.75\n");

	printf("\nO que deseja ? ");
	scanf("%d", &pedido);

    printf("Quantidade: ");
    scanf("%d", &qtde);

    // Switch case conditions
    switch (pedido)
    {
		case 100:
			total = qtde * 2.50;
			break;
		case 101:
			total = qtde * 4.75;
			break;
		case 102:
			total = qtde * 5.20;
			break;
		case 103:
			total = qtde * 3.90;
			break;
		case 104:
			total = qtde * 4.20;
			break;
		case 105:
			total = qtde * 1.75;
			break;
		default: printf("\nProduto em falta...\n\nDesculpe o transtorno, volte sempre!\n");
			break;
    }
    printf("\nTotal a pagar: R$ %.2f\n", total);
}

static void fifth (void)
{
	float altura, peso_ideal;
	char sexo;

	printf("Escolha o sexo [M/F]: ");
	scanf(" %c", &sexo);

	printf("Digite sua altura: ");
	scanf("%f", &altura);

	sexo = toupper(sexo);

	/* If-Else Condition */
	if (sexo == 'M')
		peso_ideal = (72.7 * altura)-58;
	else
		peso_ideal = (62.1 * altura) - 44.7;

	printf("O seu peso ideal e: %.2f\n", peso_ideal);
}

static void sixth (void)
{
	char codigo[5];
	int qtde;
	float total;

	printf("\nABCD................R$ 5.30\n");
	printf("XYPK................R$ 6.00\n");
	printf("KLMP................R$ 3.20\n");
	printf("QRST................R$ 2.50\n\n");

	printf("Informe o codigo do produto: ");
	scanf("%s", codigo);

	/* Nested-If conditions */
	if ((strcmp("ABCD", codigo) != 0) && (strcmp("XYPK", codigo) != 0) && (strcmp("KLMP", codigo) != 0) && (strcmp("QRST", codigo) != 0))
		printf("\nO codigo Invalido!\n");
	else
	{
		printf("Quantidade: ");
		scanf("%d", &qtde);

		if (strcmp("ABCD", codigo) == 0)
			total = qtde * 5.30;

		if (strcmp("XYPK", codigo) == 0)
			total = qtde * 6.00;

		if (strcmp("KLMP", codigo) == 0)
			total = qtde * 3.20;

		if (strcmp("QRST", codigo) == 0)
			total = qtde * 2.50;

		printf("\nO valor devido ao cliente e: %.2f\n", total);
	}
}

static void seventh (void)
{
	int codAluno;
	char conceito;
	float mediaAprov, mediaExe, nota[3];

	printf("Codigo aluno: ");
	scanf("%d", &codAluno);

	printf("Primeira nota: ");
	scanf("%f", &nota[0]);

	printf("Segunda nota: ");
	scanf("%f", &nota[1]);

	printf("Terceira nota: ");
	scanf("%f", &nota[2]);

	printf("Media dos exercicios: ");
	scanf("%f", &mediaExe);

	mediaAprov = ((nota[0] * 1) + (nota[1] * 2) + (nota[2] * 3) + mediaExe)/7;

	/* If-Else-If condition */
	if (mediaAprov >= 9.0)
		conceito = 'A';

	else if ((mediaAprov < 9.0) && (mediaAprov >= 7.5))
		conceito = 'B';

	else if ((mediaAprov < 7.5) && (mediaAprov >= 6.0))
		conceito = 'C';

	else if ((mediaAprov > 6.0) && (mediaAprov >= 4.0))
		conceito = 'D';

	else
		conceito = 'E';

	system("clear");

	printf("\nCodigo aluno: %d\n", codAluno);
	printf("Notas: %.2f, %.2f, %.2f\n", nota[0], nota[1], nota[2]);
	printf("Media exercicios: %.2f\n", mediaExe);
	printf("Media aproveitamento: %.2f\n", mediaAprov);
	printf("Conceito: %c\n", conceito);

	/* If-Else condition */
	if (conceito == 'A' || conceito == 'B' || conceito == 'C')
		printf("APROVADO");
	else
		printf("REPROVADO");
}

static void eighth (void)
{
	const int ANO_ATUAL = 2015;
	int codEmpregado, anoNascimento, anoIngresso, idade, tempo;

	printf("Codigo empregado: ");
	scanf("%d", &codEmpregado);

	printf("Ano de nascimento: ");
	scanf("%d", &anoNascimento);

	printf("Ano de ingresso na empresa: ");
	scanf("%d", &anoIngresso);

	idade = ANO_ATUAL - anoNascimento;
	tempo = ANO_ATUAL - anoIngresso;

	printf("Codigo: %d, Idade: %d, Tempo: %d\n", codEmpregado, idade, tempo);

	/* If-Else-If condition */
	if (idade >= 65)
		printf("Requerer aposentadoria\n");

	else if ((idade >= 60) && (tempo >= 25))
		printf("Requerer aposentadoria\n");

	else if (tempo >= 30)
		printf("Requerer aposentadoria\n");

	else
		printf("Não Requerer aposentadoria\n");
}

static void ninth (void)
{
	int number;

	printf("Digite um numero: ");
	scanf("%d", &number);

	/* If-Else Condition */
	if (number % 2 == 0)
		printf("Numero par");
	else
		printf("Numero par");
}

static void tenth (void)
{
	int idade[3];

	printf("Primeira nota: ");
	scanf("%d", &idade[0]);

	printf("Segunda nota: ");
	scanf("%d", &idade[1]);

	printf("Terceira nota: ");
	scanf("%d", &idade[2]);

	/* If-Else-If condition */
	if (idade[0] < idade[1] && idade[0] < idade[2])
		printf("Mais nova: %d", idade[0]);

	else if (idade[1] < idade[0] && idade[1] < idade[2])
		printf("Mais nova: %d", idade[1]);

	else if (idade[2] < idade[1] && idade[2] < idade[0])
		printf("Mais nova: %d", idade[2]);
}

static void eleventh (void)
{
	char nome[20];
	float notas[3], media;

	printf("Nome do aluno: ");
	scanf("%s", nome);

	printf("Primeira nota: ");
	scanf("%f", &notas[0]);

	printf("Segunda nota: ");
	scanf("%f", &notas[1]);

	printf("Terceira nota: ");
	scanf("%f", &notas[2]);

	/* If-Else-If condition */
	if (notas[0] > notas[1] && notas[0] > notas[2])
	{
		notas[0] = notas[0] * 3;
		notas[1] = notas[1] * 2;
		notas[2] = notas[2] * 2;
	}
	else if(notas[1] > notas[0] && notas[1] > notas[2])
	{
		notas[1] = notas[1] * 3;
		notas[2] = notas[2] * 2;
		notas[0] = notas[0] * 2;
	}
	else if (notas[2] > notas[1] && notas[2] > notas[0])
	{
		notas[2] = notas[2] * 3;
		notas[0] = notas[0] * 2;
		notas[1] = notas[1] * 2;
	}

	media = (notas[0] + notas[1] + notas[2])/3;

	printf("\nAluno: %s, media: %.2f, ", nome, media);

	/* If-Else Condition */
	if (media >= 7.0)
		printf("APROVADO\n");
	else
		printf("REPROVADO\n");
}


//Menu algorithmos condicionais
void load_alg_conditional(void)
{
	do
	{
		printf("\n\t../Conditional Algorithms \n");
		printf("\nPlease choose one of the following options:\n");

		printf("______________________________________________________\n\n");
		printf("1.------------------------------------------------------\n");
		printf("2.------------------------------------------------------\n");
		printf("3.------------------------------------------------------\n");
		printf("4.------------------------------------------------------\n");
		printf("5.------------------------------------------------------\n");
		printf("6.------------------------------------------------------\n");
		printf("7.------------------------------------------------------\n");
		printf("8.------------------------------------------------------\n");
		printf("9.------------------------------------------------------\n");
		printf("10.-----------------------------------------------------\n");
		printf("11.-----------------------------------------------------\n");
		printf("12.Return...\n");
		printf("13.Exit\n");

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
			case 12: load_menu();
				break;
			case 13: printf("\n Quitting program!\n");
				exit(FLAG);
				break;
			default: printf("\n Invalid choice!\n");
				break;
		}
	} while (choice != 8);
}



/* Libraries */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* Headers */
#include "../../../headers/menu.h"
#include "../../../headers/loop-algorithms/alg-loop-while.h"

static void first(void)
{
	int numero, contP = 0, somaP = 0;
	float mediaP;

	printf("Informe um numero: ");
	scanf("%d", &numero);

	while(numero > 0)
	{
		if ((numero%2) == 0)
		{
			contP++;
			somaP += numero;
		}

		printf("Informe um numero: ");
		scanf("%d", &numero);
	}
	mediaP = (float)somaP /contP;
	printf("Media: %.2f", mediaP);
}

static void second (void)
{
	int number, contP = 0, contI = 0, somaP = 0, somaI = 0;
	float media;

	printf("Informe um numero(inteiro não-negativo): ");
	scanf("%d", &number);

	while(number >= 0)
	{
		if ((number%2) == 0)
		{
			contP++;
				somaP += number;
		} else
		{
			contI++;
			somaI += number;
		}

		printf("Informe um numero(inteiro não-negativo): ");
		scanf("%d", &number);
	}
	media = (float)somaI/contI;

	printf("\nMedia impares: %.2f", media);
	printf("\nQuatidade de pares: %d e impares: %d", contP, contI);
	printf("\nSoma pares: %d", somaP);
}

static void third (void)
{
	int id_Funcionario, horas, dependentes;
	float slr_liquido, slr_bruto, inss, ir;

	printf("ID funcionario: ");
	scanf("%d", &id_Funcionario);

	if (id_Funcionario == 0)
	{
		printf("Entry equal to zero!");
	} else
	{
		printf("Horas trabalhadas: ");
		scanf("%d", &horas);

		printf("Dependentes: ");
		scanf("%d", &dependentes);
	}

	while(id_Funcionario != 0)
	{
		horas = horas * 12;
		dependentes = dependentes * 40;

		if (horas >= 20)
			horas = horas + 10;

		slr_bruto = horas + dependentes;

		ir = 0.085 * slr_bruto;
		inss = 0.05 * slr_bruto;

		slr_liquido = (slr_bruto - inss) - ir;

		printf("\nCodigo: %d", id_Funcionario);
		printf("\nSalario Bruto: %.2f", slr_bruto);
		printf("\nImpostos: %.2f (INSS) e %.2f (IR)", inss, ir);
		printf ("\nSalario Liq: %.2f", slr_liquido);

		printf("\n\nID funcionario: ");
		scanf("%d", &id_Funcionario);

		if (id_Funcionario == 0)
		{
			printf("Entry equal to zero!");
			break;
		}
		printf("Horas trabalhadas: ");
		scanf("%d", &horas);

		printf("Dependentes: ");
		scanf("%d", &dependentes);
	}
}

static void fourth (void)
{
	float nota[2], media;
	char sair, conceito, situacao[10];

	while(sair != 's' || sair != 'S')
	{
		printf("Nota 1: ");
		scanf("%f", &nota[0]);

		printf("Nota 2: ");
		scanf("%f", &nota[1]);

		media = (nota[0] + nota[1])/2;

		if (media >= 9.0 && media <= 10.0)
		{
			conceito = 'A';
			strcpy(situacao, "Aprovado");
		} else if (media >= 7.0 && media <= 8.9)
		{
			conceito = 'B';
			strcpy(situacao, "Aprovado");
		} else if (media >= 6.0 && media <= 6.9)
		{
			conceito = 'C';
			strcpy(situacao, "Exame");
		} else if (media >= 0.0 && media <= 5.9)
		{
			conceito = 'D';
			strcpy(situacao, "Reprovado");
		}

		printf ("\nMedia: %.2f - Conceito: %c - Situação: %s\n", media, conceito, situacao);

		printf("Sair [S/N] ? ");
		scanf(" %c", &sair);

		printf("\n");

		system("clear");
	}
}

static void fifth (void)
{
	float temperature, fahrenheit, celsius;
	char tipo, continuar;

	/* Retorna a primeira ocorrência do caractere 's' ou 'S' dentro da string("Ss").
	 * Se o caractere 's' ou 'S' não existir, strchr() retorna um NULL. */
	continuar = 'S';
	while(strchr("Ss", continuar))
	{
		printf("\nTemperatura: ");
		scanf("%f", &temperature);

		printf("Tipo de conversão (converte para: [C]elsius ou [F]ahrenheit): ");
		scanf(" %c", &tipo);

		tipo = toupper(tipo);

		switch (tipo)
		{
		case 'F':
			fahrenheit = (9 * (temperature/5)) + 32;
			printf("Temperatura em Fahrenheit: %.1f\n", fahrenheit);
			break;
		case 'C':
			celsius = ((temperature - 32) * 5)/9;
			printf("Temperatura em Celsius: %.1f\n", celsius);
			break;
		default:
			break;
		}

		do
		{
			printf("Continuar [S/N] ? ");
			scanf(" %c", &continuar);
		} while (!strchr("SsNn", continuar));
	}
}

static void sixth (void)
{
	float graus, minutos, segundos, angGrau;
	char continuar;

	continuar = 'S';
	while(strchr("Ss", continuar))
	{
		printf("Graus: ");
		do
		{
			scanf("%f", &graus);

			if (graus < 0 || graus > 360)
				printf("ERRO: Graus fora da caixa!\n\n");
		} while (graus < 0 || graus > 360);

		do
		{
			printf("Minutos: ");
			scanf("%f", &minutos);

			if (minutos < 0 || minutos > 59)
				printf("ERRO: Minutos fora da caixa\n\n");
		} while (minutos < 0 || minutos > 59);

		do
		{
			printf("Segundos: ");
			scanf("%f", &segundos);

			if (segundos < 0 || segundos > 59)
				printf("ERRO: Segundos fora da caixa\n\n");

		} while (segundos < 0 || segundos > 59);

		angGrau = graus + (minutos/60) + (segundos/3600);
		printf("Angulo em graus: %.2f", angGrau);

		do
		{
			printf("\nContinuar [S/N] ? ");
			scanf(" %c", &continuar);
		} while (!strchr("SsNn", continuar));
	}
}

static void seventh (void)
{
	char sexo, sair, situacao;
	float altura, peso, peso_ideal, diferenca, peso_inferior, peso_superior;

	while(strchr("Nn", sair))
	{


/* sexo initializes wiht \0 and this is the reason that he can pass throw the while condition
 *
 * printf("Sexo [M]asculino ou [F]eminino: ");
   scanf("%c",&sexo);

 * while(sexo != 'M' && sexo != 'F')
		{
			printf("Invalid sex!");
			system("clear");

			setbuf(stdin, NULL);

			printf("Sexo [M]asculino ou [F]eminino: ");
			scanf("%c",&sexo);
		}*/

		do
		{
			/*getchar();*/

			printf("Sexo [M]asculino ou [F]eminino: ");
			scanf("%c", &sexo);

			/*if (sexo != 'M' && sexo != 'F')
			{
				system("clear");
				printf("Invalid\n");
			}*/

			setbuf(stdin, NULL);

		} while (!strchr("MF", sexo));

		printf("Altura: ");
		scanf("%f", &altura);

		printf("Peso: ");
		scanf("%f", &peso);

		switch (sexo)
		{
			case 'M': peso_ideal = (72.7 * altura) - 58;
				break;
			case 'F': peso_ideal = (62.1 * altura) - 44.7;
				break;
		}

		printf("Peso Ideal: %.1f\n", peso_ideal);

		diferenca = peso - peso_ideal;
		printf("Diferenca de Peso: %.1f\n", diferenca);

		peso_inferior = (peso_ideal * 0.05) - peso_ideal;
		peso_superior = (peso_ideal * 0.05) + peso_ideal;

		printf("Situacao: ");

		if (peso_ideal < peso_inferior)
			printf("MAGRO\n");
		else if(peso_ideal > peso_superior)
			printf("GORDO\n");
		else
			printf("IDEAL\n");

		printf("Sair [S/N]?");
		do
		{
			sair = getchar();
		} while (!strchr("SsNn", sair));
	}
}

//Menu algoritmos de repetiçao
void load_alg_loop_while (void)
{
	do
	{
		printf("\n\t../Loop Algorithms - While \n");
		printf("\nPlease choose one of the following options:\n");

		printf("_____________________________________________________\n\n");
		printf("1......................................................\n");
		printf("2......................................................\n");
		printf("3......................................................\n");
		printf("4......................................................\n");
		printf("5......................................................\n");
		printf("6......................................................\n");
		printf("7......................................................\n");
		printf("8.Return\n");
		printf("9.Exit\n");

		printf("_____________________________________________________\n\n");
		printf("\t\tEnter Choice: ");
		scanf("%u", &choice);

		system("clear");

		switch (choice)
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
			case 8:load_alg_loop();
				break;
			case 9: printf("\nQuitting program!\n");
				exit(FLAG);
				break;
			default: printf("\nInvalid choice!\n");
				break;
		}
	} while (choice != 9);
}

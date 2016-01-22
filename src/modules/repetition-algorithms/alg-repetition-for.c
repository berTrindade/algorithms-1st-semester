
/* Libraries */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/* Headers */
#include "../../../headers/menu.h"
#include "../../../headers/repetition-algorithms/alg-repetition-for.h"

static void first(void)
{
	int number;

	for (int i = 0; i < 10; i++)
	{
		printf("Digite um numero inteiro: ");
		scanf("%d", &number);

		if (number % 2 == 0)
			printf("O numero %d e PAR\n", number);
		else
			printf("O numero %d e IMPAR\n", number);
	}
}

static void second(void)
{
	int result;

	for (int i = 0; i < 9; i++)
	{
		result = i * 9;
		printf("%d x 9 = %d\n", i, result);
	}
}

static void third(void)
{
	const int MAX_ALUNOS = 2;
	float notas[3], media;

	for (int i = 0; i < MAX_ALUNOS; i++)
	{
		printf("Primeira nota: ");
		scanf("%f", &notas[0]);

		printf("Segunda nota: ");
		scanf("%f", &notas[1]);

		printf("Terceira nota: ");
		scanf("%f", &notas[2]);

		media = (notas[0] + notas[1] + notas[2]) / 3;
		printf("\nNota 1: %.2f, Nota 2: %.2f, Nota 2: %.2f. Media: %.2f\n\n", notas[0], notas[1], notas[2], media);
	}
}

static void fourth(void)
{
	const int PEOPLE = 5;
	int filhos, count13 = 0, counter4 = 0, counter0 = 0;

	for (int i = 1; i <= PEOPLE; i++)
	{
		printf("%d - Quantidade de filhos voces tem: ", i);
		scanf("%d", &filhos);

		if (filhos >= 1 && filhos <= 3)
			count13 = count13 + 1;

		else if (filhos >= 4)
			counter4 = counter4 + 1;

		else if (filhos == 0)
			counter0 = counter0 + 1;
	}
	printf("Quantas pessoas tem entre 1 e 3 filhos: %d\n", count13);
	printf("Quantas pessoas tem mais de 4 filhos: %d\n", counter4);
	printf("Quantas pessoas não tem filhos: %d\n", counter0);
}

static void fifth(void)
{
	char sexo, nome[20];
	const int PEOPLE = 5;
	int idade, mediaF, somaF = 0, countM = 0, countF = 0, count30 = 0, count60 = 0;

	for (int i = 1; i <= PEOPLE; i++)
	{
		printf("\nPessoa numero %d\n", i);

		printf("Nome: ");
		scanf("%s", nome);

		printf("Sexo [M/F]: ");

		/* the leading space before the %c ignores space characters in the input */
		scanf(" %c", &sexo);

		sexo = toupper(sexo);

		printf("Idade: ");
		scanf("%d", &idade);

		if (sexo == 'M')
			countM = countM + 1;
		else
		{
			countF = countF + 1;
			somaF = somaF + idade;
		}

		if (idade <= 30)
			count30 = count30 + 1;

		else if (idade >= 60)
			count60 = count60 + 1;
	}
	mediaF = (float)somaF/countF;

	printf("\nNúmero de pessoas do sexo feminino: %d\n", countF);
	printf("Média de idade das mulheres: %.2d\n", mediaF);

	printf("Número de pessoas do sexo masculino: %d\n", countM);
	printf("Número de pessoas com idade inferior a 30 anos: %d\n", count30);
	printf("Número de pessoas com idade inferior a 60 anos: %d\n", count60);
}

static void sixth (void)
{
	int valor, somaP = 0;

	for (int i = 1; i <= 50; i++)
	{
		printf("Digite um valor: ");
		scanf("%d", &valor);

		if (valor % 2 == 0)
			somaP = somaP + valor;
	}
	printf("Soma numeros par igual a: %d", somaP);
}

static void seventh (void)
{
	printf("Numeros impares: \n");
	for (int i = 1; i <= 40; i++)
	{
		if (i % 2 != 0)
			printf("%d\n", i);
	}
}

static void eighth (void)
{
	int numbers, somaP = 0, somaI = 0, countI = 0;
	float mediaI;

	for (int i = 1; i <= 10; i++)
	{
		printf("Digite um numero inteiro: ");
		scanf("%d", &numbers);

		if (numbers % 2 == 0)
			somaP = somaP + numbers;
		else
		{
			countI = countI + 1;
			somaI = somaI + numbers;
		}
	}

	mediaI = (float)somaI/countI;

	printf("Soma numeros pares: %d\n", somaP);
	printf("Media numeros impares: %.2f", mediaI);
}

static void ninth (void)
{
	int idFuncionario, horas, dependentes;
	float slr_bruto, slr_liquido, inss, ir;

	for (int i = 1; i <= 10; ++i)
	{
		printf("Codigo: ");
		scanf("%d", &idFuncionario);

		printf("Horas trabalhadas: ");
		scanf("%d", &horas);

		printf("Numero de dependentes: ");
		scanf("%d", &dependentes);

		slr_bruto = (horas * 12) + (dependentes * 40);

		inss = slr_bruto * 0.085;
		ir = slr_bruto * 0.05;

		slr_liquido = (slr_bruto - inss) - ir;

		printf("Codigo %d \n", idFuncionario);
		printf("Salario Bruto %.2f \n", slr_bruto);
		printf("Impostos %.2f (INSS) e %.2f (IR) \n", inss, ir);
		printf ("Salario Liq = %.2f \n ", slr_liquido);
	}
}

static void tenth (void)
{

	float notas[2], media;
	char conceito, situacao[10];

	for (int i = 0; i <= 10; i++)
	{
		printf("Primeira nota: ");
		scanf("%f", &notas[0]);

		printf("Segunda nota: ");
		scanf("%f", &notas[1]);

		media = (notas[0] + notas[1])/2;

		if ((media >= 9.0) && (media <= 10.0))
		{
			conceito = 'A';
			strcpy(situacao, "Aprovado");
		} else if((media >= 7.0) && (media <= 8.9))
		{
			conceito = 'B';
			strcpy(situacao, "Aprovado");
		} else if ((media >= 6.0) && (media <= 6.9))
		{
			conceito = 'C';
			strcpy(situacao, "Exame");
		} else if ((media >= 0.0) && (media <= 5.9))
		{
			conceito = 'D';
			strcpy(situacao, "Reprovado");
		}
	}
	printf ("\n Media %.2f - Conceito %c - Situação %s ", media, conceito, situacao);
}

static void eleventh (void)
{
	int contPrimos = 0, contDivisores;

	/* Comeca por 2 pois o numero 1 nao e primo */
	for (int i = 2; i <= 150; i++)
	{
		contDivisores = 0;
		/* Aqui iremos dividir o numero(i) informado
		 * por todos os numeros que estao entre ele e 1. */
		for (int j = 1; j <= i; j++)
		{
			printf("j = %d\n", j);
			/* Se for divisivel por um numero sem sobrar resto,
			 * incrementamos a variavel controle, que conta quantos divisores o numero tem. */
			if ((i % j) == 0)
				contDivisores++;
		}
		/* verificamos quantos divisores o numero informado possui.
		 * Se for apenas dois, ele e primo, caso contrario, nao. */
		if (contDivisores == 2)
		{
			contPrimos++;
			printf("i = %d - Primo\n", i);
		}
		/* Quando a quantidade de numeros primos chegar a 30 o loop sera encerrado */
		if (contPrimos == 30)
			break;
	}
	printf("Quantidade de numeros primos: %d\n", contPrimos);
}

static void twelfth (void)
{
	int somaInt = 0;

	for (int i = 1; i <= 100; i++)
		somaInt+=i;

	printf("Soma = %d", somaInt);
}

static void thirteenth (void)
{
	int somaPar = 0;
	for (int i = 1; i <= 10; i++)
	{
		if ((i % 2) == 0)
			somaPar+=i;
	}
	printf("Soma pares = %d", somaPar);
}

static void fourteenth (void)
{
	const int ALUNOS = 3;
	int livros, serie, redacao, contSerie = 0, maior = 0, alunosRedacao = 0, porcentagem;

	for (int i = 0; i <= ALUNOS; i++)
	{
		printf("Serie: ");
		scanf("%d", &serie);

		printf("Quantidade de livros por mes: ");
		scanf("%d", &livros);

		printf("Redacao: ");
		scanf("%d", &redacao);

		if (serie == 1)
			contSerie++;

		if (livros > maior && serie == 2)
			maior = livros;

		if (redacao == 1 && serie == 3)
			alunosRedacao++;
	}
	porcentagem = (float)((alunosRedacao * 100)/ALUNOS);
	printf("%d", porcentagem);
}

static void fifteenth (void)
{
	int numbers, contador, somador = 0;
	float media;

	for (contador = 1; contador <= 50; contador++)
	{
		printf("Digite um numero: ");
		scanf("%d", &numbers);

		somador += numbers;
	}
	media = (float)somador/contador;
	printf("Media: %.2f\n", media);
}

static void sixteenth (void)
{
	int numbers, contador, qtde, somador = 0;
	float media;

	printf("Digite quantos numeros deseja calcular a media: ");
	scanf("%d", &qtde);

	for (contador = 1; contador <= qtde; contador++)
	{
		printf("Digite um numero: ");
		scanf("%d", &numbers);

		somador += numbers;
	}
	media = (float)somador/contador;
	printf("Media: %.2f\n", media);
}

static void seventeenth (void)
{
	int somador = 0;
	for (int i = 1; i <= 20; i++)
		somador += i;

	printf("S = %d", somador);
}

static void eighteenth (void)
{
	int S = 0;

	for (int i = 1; i <= 40; i++)
	{
		if ((i % 2) == 0)
			S += i;
	}
	printf("S = %d", S);
}

//Menu algoritmos de repetiçao
void load_alg_repetition_for (void)
{
	do
	{
		printf("\n\t../Repetition Algorithms - For \n");
		printf("\nPlease choose one of the following options:\n");

		printf("_____________________________________________________\n\n");
		printf("1......................................................\n");
		printf("2......................................................\n");
		printf("3......................................................\n");
		printf("4......................................................\n");
		printf("5......................................................\n");
		printf("6......................................................\n");
		printf("7......................................................\n");
		printf("8......................................................\n");
		printf("9......................................................\n");
		printf("10.....................................................\n");
		printf("11.....................................................\n");
		printf("12.....................................................\n");
		printf("13.....................................................\n");
		printf("14.....................................................\n");
		printf("15.....................................................\n");
		printf("16.....................................................\n");
		printf("17.....................................................\n");
		printf("18.....................................................\n");
		printf("19.Return\n");
		printf("20.Exit\n");

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
		case 3:third();
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
		case 9:	ninth();
			break;
		case 10: tenth();
			break;
		case 11: eleventh();
			break;
		case 12: twelfth();
			break;
		case 13: thirteenth();
			break;
		case 14: fourteenth();
			break;
		case 15: fifteenth();
			break;
		case 16: sixteenth();
			break;
		case 17: seventeenth();
			break;
		case 18: eighteenth();
			break;
		case 19:load_alg_repetition();
			break;
		case 20: printf("\n Quitting program!\n");
			exit(FLAG);
			break;
		default: printf("\n Invalid choice!\n");
			break;
		}
	} while (choice != 20);
}


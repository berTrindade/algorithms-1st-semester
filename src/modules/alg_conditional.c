
/* Libraries */
#include <stdio.h>
#include <stdlib.h>

/* Headers */
#include "../../headers/menu.h"
#include "../../headers/alg_conditional.h"

/*Calcule a média aritmética das 3 notas de um aluno e mostre, além do valor da média,
 * uma mensagem de "Aprovado", caso a média seja igual ou superior a 6,
 * ou a mensagem "reprovado", caso contrário.
 * */
static void exercise_one (void)
{

	int x;
	float nota1, nota2, nota3, media;
	char status[2][10] = {"APROVADO", "REPROVADO"};

	printf("Digite a 1ª nota: ");
	scanf("%f", &nota1);

	printf("Digite a 2ª nota: ");
	scanf("%f", &nota2);

	printf("Digite a 3ª nota: ");
	scanf("%f", &nota3);

	media = (nota1 + nota2 +nota3)/3;
	media >= 7 ? x = 0 : 1;

	printf("Aluno %s! Media final: %.2f\n", status[x], media);

}

//Ler dois números e imprimir o de maior valor
static void exercise_two(void)
{

	int numero1, numero2, maior = 0;

	printf("Digite um valor: ");
	scanf("%d", &numero1);

	printf("Digite um valor: ");
	scanf("%d", &numero2);

	if ((numero1 > maior) && (numero1 != numero2))
		maior += numero1;
	else
		maior += numero2;

	printf("O maior valor digitado foi: %d\n", maior);

}

/*Escrever o número do aluno, suas notas, a média dos exercícios,
 * a média de aproveitamento, o conceito correspondente e a mensagem:
 * APROVADO se o conceito for A,B ou C e REPROVADO se o conceito for D ou E.
 * */
static void exercise_three(void)
{

	int cod_aluno, x;
	char conceito[5] = {'A', 'B', 'C', 'D', 'E'};
	float nota1, nota2, nota3, exe_media, apv_media;

	printf("Digite o codigo do aluno(a): ");
	scanf("%d", &cod_aluno);

	printf("Digite a 1ª nota: ");
	scanf("%f", &nota1);

	printf("Digite a 2ª nota: ");
	scanf("%f", &nota2);

	printf("Digite a 3ª nota: ");
	scanf("%f", &nota3);

	printf("Digite a media dos exercicios: ");
	scanf("%f", &exe_media);

	apv_media = (nota1 + (nota2 * 2) + (nota3 * 3) + exe_media)/7;

	if(apv_media >= 9.0)
		x = 0;
	else if ((apv_media >= 7.5) && (apv_media < 9.0))
		x = 1;
	else if ((apv_media >= 6.0) && (apv_media < 7.5))
		x = 2;
	else if((apv_media >= 4.0) && (apv_media < 6.0))
		x = 3;
	else
		x = 4;

	printf("O aluno com o n %d, teve as notas são %.2f, %.2f, %.2f, assim, atingiu media: %.2f. Ou seja, conceito %c\n", cod_aluno, nota1, nota2, nota3, apv_media, conceito[x]);

	(conceito[0] || conceito[1] || conceito[2]) ? printf("APROVADO") : printf("REPROVADO");

}

/*Dada a idade de um nadador classifica-o uma das seguintes categorias:
 * Infantil A (5-7anos),Infantil B (8-10 anos), Junvenil A (11-13 anos),
 * Juvenil B (14-17anos), Adulto maior de 18.
 * */
static void exercise_four(void)
{

	int idade;

	printf("Digite a idade: ");
	scanf("%d", &idade);

	if ((idade >= 5) && (idade <= 7))
		printf("Infantil A");

	if ((idade >= 8) && (idade <= 10))
		printf("Infantil B");

	if ((idade >= 11) && (idade <= 13))
		printf("Juvenil A");

	if ((idade >= 14) && (idade <= 17))
		printf("Juvenil B");

	if (idade >= 18)
		printf("Adulto");

	if (idade < 5)
		printf("Sem categoria");

}

//Calcule seu peso ideal
static void exercise_five(void)
{

	float altura, peso_ideal;
	char sexo;

	printf("Escolha o sexo [M/F]:");
	scanf(" %c", &sexo);
	getchar();

	printf("Digite sua altura: ");
	scanf("%f", &altura);

	if (sexo == 'M')
	{
		peso_ideal = (72.7 * altura)-58;
		printf("O seu peso ideal é: %.2f\n", peso_ideal);
	}else
	{
		peso_ideal = (62.1 * altura) - 44.7;
		printf("O seu peso ideal é: %.2f\n", peso_ideal);
	}

}
//Menu algorithmos condicionais
void load_alg_conditional(void)
{
	do
	{
		printf("\n\t../Conditional Algorithms \n");
		printf("\nPlease choose one of the following options:\n");

		printf("_____________________________________________________\n\n");
		printf("1. Calcule a média aritmética das 3 notas de um aluno...\n");
		printf("2. Ler dois números e imprimir o de maior valor...\n");
		printf("3. ..APROVADO se o conceito for A,B ou C e REPROVADO se..\n");
		printf("4. ..Dada a idade de um nadador classifica-o em uma das..\n");
		printf("5. Calcule seu peso ideal.\n");
		printf("6. Return...\n");
		printf("7.Exit\n");

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
			case 6: load_menu();
				break;
			case 7: printf("\n Quitting program!\n");
				exit(FLAG);
				break;
			default: printf("\n Invalid choice!\n");
				break;
		}
	} while (choice != 7);
}


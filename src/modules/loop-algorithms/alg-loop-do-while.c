
/* Libraries */
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

/* Headers */
#include "../../../headers/menu.h"
#include "../../../headers/loop-algorithms/alg-loop-do-while.h"

static void first(void)
{
	float salario, media_salario, media_filhos, percentual, soma_salario = 0, maior = 0;
	int filhos, soma_filhos = 0, populacao = 0, slr_100 = 0;

	do
	{
		printf("\nDigite seu salario: ");
		scanf("%f", &salario);

		populacao++;
		soma_salario += salario;

		if (salario > maior)
			maior = salario;

		if (salario <= 100)
			slr_100++;

		printf("Digite seu numero de filhos: ");
		scanf("%d", &filhos);

		soma_filhos += filhos;

	} while (salario >= 0);

	media_salario = soma_salario/populacao;
	printf("\nMedia salarios: %.2f\n", media_salario);

	media_filhos = (float)soma_filhos/populacao;
	printf("Media filhos: %.2f\n", media_filhos);

	printf("Maior salario: %.2f\n", maior);

	percentual = ((float)slr_100/populacao) * 100;
	printf("Percentual de pessoas com salario ate R$ 100: %.0f%%\n", percentual);
}

static void second(void)
{
	float height_ze, height_chico;
	int ano = 0;

	height_ze = 1.10;
	height_chico = 1.50;

	do
	{
		if (height_ze < height_chico)
		{
			height_chico = height_chico + 0.02;
			height_ze = height_ze + 0.03;
			ano++;
		}
	} while (height_ze <= height_chico);
	printf("Restam %d anos para ze alcancar chico", ano);
}

static void third(void)
{
	int voteID, cand1 = 0, cand2 = 0, cand3 = 0, cand4 = 0, nullVote = 0, blankVote = 0;

	do
	{
		printf("Enter the Vote's ID: ");
		scanf("%d", &voteID);

		switch (voteID)
		{
		case 1: cand1++;
			break;
		case 2: cand2++;
			break;
		case 3: cand3++;
			break;
		case 4: cand4++;
			break;
		case 5: nullVote++;
			break;
		case 6: blankVote++;
			break;
		default: printf("\nInvalid ID entered, please re-enter\n");
			break;
		}

		printf("Enter wit '0' to quit: ");
		scanf("%d", &voteID);
	} while (voteID != 0);

	printf("Candidate 1: %d\n", cand1);
	printf("Candidate 2: %d\n", cand2);
	printf("Candidate 3: %d\n", cand3);
	printf("Candidate 4: %d\n", cand4);
	printf("Null votes : %d\n", nullVote);
	printf("Blank votes: %d\n", blankVote);
}

static void fourth(void)
{
	int number, smallest = INT_MAX, largest = INT_MIN;

	do
	{
		printf("Enter with a positive number: ");
		scanf("%d", &number);

		if (number < 0)
		{
			if (smallest == INT_MAX && largest == INT_MIN)
			{
				smallest = largest = 0;
				break;
			}
			break;
		} else
		{
			if (number > largest)
				largest = number;

			if (number <  smallest)
				smallest = number;
		}
	} while (number >= 0);

	printf("The largest number is: %d\n", largest);
	printf("The smallest number is: %d", smallest);
}


static void fifth(void)
{
	int number, loop = 0, result;

	do
	{
		loop++;

		printf("Enter with a number: ");
		scanf("%d", &number);

		for (int i = 1; i <= number; i++)
		{
			result = i * number;
			printf("%d X %d = %d\n", i, number, result);
		}
		printf("\n");

	} while (loop < 10);
}

static void sixth(void)
{
	int number, count025 = 0, count2650 = 0, count5175 = 0, count76100 = 0;

	do
	{
		printf("Enter with a positive integer number: ");
		scanf("%d", &number);

		if (number >= 0 && number <= 25)
			count025++;

		else if (number >= 26 && number <= 50)
			count2650++;

		else if (number >= 51 && number <= 75)
			count5175++;

		else if (number >= 76 && number <= 100)
			count76100++;

	} while (number >= 0);

	printf("Range [0,25]: %d\n", count025);
	printf("Range [26,50]: %d\n", count2650);
	printf("Range [51,75]: %d\n", count5175);
	printf("Range [76,100]: %d\n", count76100);
}

static void seventh(void)
{
	int m, n, beginning, end, adder;

	do
	{
		printf("Enter with m and n's values [Enter with a at least one negative number to leave]: ");
		scanf("%d %d", &m, &n);

		if ((m < 0 && n < 0) || (m < 0 || n < 0))
		{
			printf("Negative number entered!\n");
			break;
		} else
		{
			if (m >= n)
			{
				beginning = n;
				end = m;
			} else
			{
				beginning = m;
				end = n;
			}

			adder = 0;
			for (int i = beginning; i <= end; i++)
				adder = adder + i;

			printf("Adder's value: %d\n", adder);
		}

	} while (m >= 0 && n >= 0);
}

static void eighth(void)
{
	int m, divisor, adder;

	do
	{
		printf("Enter with one value: ");
		scanf("%d", &m);

		if (m%2 == 0)
		{
			divisor = 0;
			for (int i = 1; i <= m; i++)
			{
				if (m%i == 0)
					divisor++;
				else
					break;
			}
			printf("The number %d has %d divisors.\n", m, divisor);
		} else
		{
			adder = 0;
			for (int i = 1; i <= m; i++)
			{
				if (i%2 != 0)
					adder = adder + i;
			}
			printf("The sum of the odd numbers was: %d\n", adder);
		}
	} while (m >= 0);
}


static void ninth(void)
{
	int number, adder = 0;

	do
	{
		printf("Enter with a number: ");
		scanf("%d", &number);

		if (number%2 != 0)
			adder = adder + number;

	} while (number != 0);
	printf("The sum of all the number was: %d\n", adder);
}


static void tenth(void)
{
	int number, negative_adder = 0, positive_adder = 0, difference;

	do
	{
		printf("Enter with a number: ");
		scanf("%d", &number);

		if (number > 0)
			positive_adder = positive_adder + number;
		else
			negative_adder = negative_adder + number;

		difference = positive_adder - negative_adder;
	} while (number != 0);
	printf("The difference between the positive and negative numbers is: %d", difference);
}

//	0.0f is a float
//	0.0 is a double
//	0 is an int
//
//	float a = 0; /* Implicit conversion from int to float */
//
//	float b = 0.0f; /* No implicit conversion */
//
//	float c = 0.0; /* Implicit conversion from double to float */

static void eleventh(void)
{
	int age, inhabitants = 0, youngest, oldest, woman100 = 0;
	char sex;
	float salary, average, adder = 0.0f;
	bool firstAge = true;

	do
	{
		printf("Enter with an age: ");
		scanf("%d", &age);

		if (firstAge)
		{
			if (age < 0)
			{
				youngest = oldest = 0;
				break;
			} else
			{
				youngest = oldest = age;
				firstAge = false;
			}
		} else
		{
			if (age < 0)
				break;
			else
			{
				oldest = (age > oldest) ? age : oldest;
				youngest = (age < youngest) ? age : youngest;
			}
		}

		printf("Is it [M]ale or [F]emale: ");
		scanf(" %c", &sex);

		while(sex != 'F' && sex != 'M')
		{
			printf("Invalid sex!\n");

			printf("Is it [M]ale or [F]emale: ");
			scanf(" %c", &sex);
		}

		printf("Inform the salary: ");
		scanf("%f", &salary);

		if (sex == 'F' && salary <= 100)
			woman100++;

		adder = adder + salary;

		inhabitants++;
	} while (age >= 0);

	if (adder == 0 && inhabitants == 0)
	{
		average = 0.0f;
		printf("The group average salary is: %.2f\n", average);
	} else
	{
		average = adder/inhabitants;
		printf("The group average salary is: %.2f\n", average);
	}

	printf("The oldest person is %d years old and youngest person in the group is %d years old.\n", oldest, youngest);
	printf("The woman's amount with salary until R$ 100.00 is: %d\n", woman100);
}

static void twelfth(void)
{
	int age, oldest, women = 0, eyes, hair;
	char sex;
	bool firstAge = true;

	do
	{
		printf("How old are you ? ");
		scanf("%d", &age);

		if (firstAge)
		{
			if (age < 0)
			{
				oldest = 0;
				printf("Without data to present.\n");
				break;
			} else
			{
				oldest = age;
				firstAge = false;
			}
		} else
		{
			if (age < 0)
				break;
			else
			{
				if (age > oldest)
					oldest = age;
			}
		}

		printf("Are you [M]ale or [F]emale ? ");
		scanf(" %c", &sex);

		while(sex != 'F' && sex != 'M')
		{
			printf("Invalid sex!\n");

			printf("Is it [M]ale or [F]emale: ");
			scanf(" %c", &sex);
		}

		printf("Which color are your eyes: [1] - Blue, [2] - Green or [3] - Brown ? ");
		scanf("%d", &eyes);

		while(eyes != 1 && eyes != 2 && eyes != 3)
		{
			printf("Invalid choice!\n");

			printf("Which color are your eyes: [1] - Blue, [2] - Green or [3] - Brown ? ");
			scanf("%d", &eyes);
		}

		printf("Which color are your hair: [1] - Blonde, [2] - Brown or [3] - Black ? ");
		scanf("%d", &hair);

		while(hair != 1 && hair != 2 && hair != 3)
		{
			printf("Invalid choice!\n");

			printf("Which color are your hair: [1] - Blonde, [2] - Brown or [3] - Black ? ");
			scanf("%d", &hair);
		}

		//		if (sex == 'F' && (age >= 18 && age <= 35) && eyes == 2 && hair == 1)
		//			women++;

		if (sex == 'F')
		{
			if (age >= 18 && age <= 35)
			{
				if (eyes == 2 && hair == 1)
					women++;
			}
		}
	} while (age != -1);
	printf("The oldest person inside the group: %d\n", oldest);
	printf("The amount of individuals of female sex whose age is between 18 and 35 years old and it has green eyes and blonde hair is: %d\n", women);
}

static void thirteenth(void)
{
	int number = 1000;

	do
	{
		if (number%11 == 5)
			printf("%d", number);

		number++;
	} while (number <= 1999);
}

static void fourteenth(void)
{
	int number = 13, counter = 0, adder = 0;
	float average;

	do
	{
		if (number >= 13 && number <= 73)
		{
			adder = adder + number;
			counter++;
		}

		number++;
	} while (number <= 73);

	average = (float)adder/counter;
	printf("Arithmetic average: %.2f", average);
}

static void fifteenth(void)
{
	int number = 100;

	do
	{
		if (number%2 != 0)
			printf("%4d", number);

		number++;
	} while (number <= 200);
}

static void sixteenth(void)
{
	int idAluno, idHighest, idLowest, height, lowest, highest, loop = 0;
	bool firstHeight = true;

	/*
	 * 1 centimeters = 0.01 meters;
	 * Convert meters into centimeters: Centimeters = Meters/0.01;
	 */

	do
	{
		printf("Student's ID and your height (in centimeters): ");
		scanf("%d %d", &idAluno, &height);

		if (firstHeight)
		{
			if (height < 0)
			{
				highest = lowest = 0;
				idHighest = idLowest = 0;

				printf("Without data to present.\n");
				break;
			} else
			{
				highest = lowest = height;
				idHighest = idLowest = idAluno;

				firstHeight = false;
			}
		} else
		{
			if (height < 0)
				break;
			else
			{
				if (height > highest)
				{
					highest = height;
					idHighest = idAluno;
				}

				if (height < lowest)
				{
					lowest = height;
					idLowest = idAluno;
				}
			}
		}
		loop++;
	} while (loop < 5);

	printf("The student %d is the highest student with %d of height\n", idHighest, highest);
	printf("The student %d is the lowest student with %d of height", idLowest, lowest);
}

static void seventeenth(void)
{
	int students = 0, sex, womens = 0;
	float height, highest, lowest, womensHeight = 0.0f, womensAverage, classHeight = 0.0f, classAverage;
	bool firstHeight = true;

	do
	{
		printf("How tall are you ? ");
		scanf("%f", &height);

		classHeight = classHeight + height;

		if (firstHeight)
		{
			highest = lowest = height;
			firstHeight = false;
		} else
		{
			if (height > highest)
				highest = height;

			if (height < lowest)
				lowest = height;
		}

		printf("Are you Male or Female (1 - Male/2 - Female) ? ");
		scanf("%d", &sex);

		if (sex == 2)
		{
			womensHeight = womensHeight + height;
			womens++;
		}

		students++;
	} while (students < 4);

	classAverage = classHeight/students;
	printf("\nAverage class height: %.2f\n", classAverage);

	womensAverage = womensHeight/womens;
	printf("Average womens height: %.2f\n", womensAverage);

	printf("The Highest height of class: %.2f\n", highest);
	printf("The Lowest height of class: %.2f", lowest);


}

//A prime number is a positive integers number, whose has only two divisors: 1 and itself.
static void eighteenth(void)
{
	int number = 2, divisors = 0, product = 1;

	do
	{
		divisors = 0;
		for (int i = 1; i <= number; i++)
		{
			if (number%i == 0)
				divisors++;
		}

		if (divisors == 2)
			product = product * number;

		number++;
	} while (number <= 100);
	printf("Product: %d\n", product);
}

static void nineteenth(void)
{
	int a, b, c, d, loop = 0, aux;

	do
	{
		printf("A, B, C, D: ");
		scanf("%d %d %d %d", &a, &b, &c, &d);

		printf("\nNao ordenados: %d %d %d %d\n", a, b, c, d);

		do
		{
			if (a > b)
			{
				aux = a;
				a = b;
				b = aux;
			}

			if(b > c)
			{
				aux = b;
				b = c;
				c = aux;
			}

			if (c > d)
			{
				aux = c;
				c = d;
				d = aux;
			}
		} while (!(a <= b && b <= c && c <= d));
		printf("Ordem crescente: %d %d %d %d\n\n", a, b, c, d);

		loop++;
	} while (loop < 5);
}

static void twentieth(void)
{
	int a, b, c, d, loop = 0, aux;

	do
	{
		printf("A, B, C, D: ");
		scanf("%d %d %d %d", &a, &b, &c, &d);

		printf("\nNao ordenados: %d %d %d %d\n", a, b, c, d);

		do
		{
			if (b > a)
			{
				aux = b;
				b = a;
				a = aux;
			}

			if(c > b)
			{
				aux = c;
				c = b;
				b = aux;
			}

			if (d > c)
			{
				aux = d;
				d = c;
				c = aux;
			}
		} while (!(a >= b && b >= c && c >= d));
		printf("Ordem decrescente: %d %d %d %d\n\n", a, b, c, d);

		loop++;
	} while (loop < 5);
}

static void twenty_first(void)
{
	int cityID, travelVehicles, accidentVictims, cities = 0, largest, smallest, vehiclesAdder = 0, rsCities = 0, rsVehiclesAdder = 0, whichCityLarge, whichCitySmall;
	char state[2];
	float vehiclesAverage, rsVehiclesAverage;
	bool firstIndex = true;

	do
	{
		printf("City's ID: ");
		scanf("%d", &cityID);

		printf("State: ");
		scanf("%s", state);

		for (int i = 0; i < 2; i++)
			state[i] = toupper(state[i]);

		printf("Travel vehicles number(in 2012): ");
		scanf("%d", &travelVehicles);

		vehiclesAdder = vehiclesAdder + travelVehicles;

		printf("Transit accidents number with victims(in 2012): ");
		scanf("%d", &accidentVictims);

		if (strcmp("RS", state) == 0)
		{
			rsVehiclesAdder = rsVehiclesAdder + accidentVictims;
			rsCities++;
		}

		if (firstIndex)
		{
			largest = smallest = accidentVictims;
			whichCitySmall = whichCityLarge = cityID;

			firstIndex = false;
		} else
		{
			if (accidentVictims > largest)
			{
				largest = accidentVictims;
				whichCityLarge = cityID;
			}

			if(accidentVictims < smallest)
			{
				smallest = accidentVictims;
				whichCitySmall = cityID;
			}
		}

		cities++;
	} while (cities < 2);

	printf("\nThe largest index is %d and from %d, the smallest is %d and from %d\n", largest, whichCityLarge, smallest, whichCitySmall);

	vehiclesAverage = (float)vehiclesAdder/cities;
	printf("The average of vehicles in Brazilian cities is %.2f\n", vehiclesAverage);

	rsVehiclesAverage = (float)rsVehiclesAdder/rsCities;
	printf("The average of accidents with victims among the Rio Grande do Sul cities is %.2f\n", rsVehiclesAverage);
}

static void twenty_second(void)
{
	int option;
	float balance = 1000.00, deposit, withdrawal;

	do
	{
		printf("\n1 - Deposit\n");
		printf("2 - Withdrawal\n");
		printf("3 - Balance\n");
		printf("4 - Leave\n");

		do
		{
			printf("What do you want to do ? ");
			scanf("%d", &option);

			if (option < 1 || option > 4)
				printf("Invalid option!\n");
		} while (option < 1 || option > 4);

		switch (option)
		{
		case 1:
			printf("How much is the value of the deposit ? $ ");
			scanf("%f", &deposit);

			balance += deposit;
			break;
		case 2:
			printf("How much do you want to withdraw ? $ ");
			scanf("%f", &withdrawal);

			balance -= withdrawal;
			break;
		case 3:
			printf("Your balance is equal to: $ %.2f\n", balance);
			break;
		case 4:
			printf("End transitions.");
			break;
		}
	} while (option != 4);
}

//Menu algoritmos de repetiçao
void load_alg_loop_do_while (void)
{
	do
	{
		printf("\n\t../Loop Algorithms - Do While\n");
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
		printf("19.....................................................\n");
		printf("20.....................................................\n");
		printf("21.....................................................\n");
		printf("22.....................................................\n");
		printf("23. Return\n");
		printf("24. Exit\n");

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
			case 19: nineteenth();
				break;
			case 20: twentieth();
				break;
			case 21: twenty_first();
				break;
			case 22: twenty_second();
				break;
			case 23: load_alg_loop();
				break;
			case 24: printf("\n Quitting program!\n");
				exit(FLAG);
				break;
			default: printf("\n Invalid choice!\n");
				break;
		}
	} while (choice != 24);
}


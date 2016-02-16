
//Libraries
#include <stdio.h>
#include <stdlib.h>

//Headers
#include "../../headers/menu.h"
#include "../../headers/alg-sequential.h"

//Show on screen the product between 28 and 23
static void first (void)
{
	int result = 0;

	result = 43 + 28;
	printf("The product of 43 + 28 is: %d.\n", result);
}

//Show arithmetic mean between 3 numbers entered by user
static void second (void)
{
	float first = 0.0f, second = 0.0f, third = 0.0f, mean = 0.0f;

	printf("First grade: ");
	scanf("%f", &first);

	printf("Second grade: ");
	scanf("%f", &second);

	printf("Third grade: ");
	scanf("%f", &third);

	mean = (first + second + third)/3;
	printf("\nArithmetic mean: %.2f.\n", mean);
}

//Read a number and show his successor and predecessor on screen
static void third (void)
{
	int number = 0, predecessor = 0, successor = 0;

	printf("Inform a number: ");
	scanf("%d", &number);

	predecessor = number++;
	successor = number--;

	printf("The predecessor is: %d and the successor is: %d\n", predecessor, successor);
}

//Read two numbers and show the sum
static void fourth(void)
{
	int first = 0, second = 0, sum = 0;

	printf("Enter two numbers to add: ");
	scanf("%d %d", &first, &second);

	sum = first + second;
	printf("The sum of %d and %d is: %d\n", first, second, sum);
}

//Read a number and show the third part of him
static void fifth (void)
{
	float number = 0.0f, third_part = 0.0f;

	printf("Inform a number: ");
	scanf("%f", &number);

	third_part = number/3;
	printf("Third part of %.1f is: %.1f\n", number, third_part);
}

//Read two numbers and show the following results: Division of the first by the second number
static void sixth (void)
{
	float first = 0.0f, second = 0.0f, result = 0.0f;

	printf("Enter two numbers to divide: ");
	scanf("%f %f", &first, &second);

	result = first/second;
	printf("The division product between %.2f and %.2f is: %.2f", first, second, result);
}

//Read four numbers and show the weighted mean, knowing that the weights are respectively: 1, 2, 3, 4
static void seventh (void)
{
	float first = 0.0f, second = 0.0f, third = 0.0f, fourth = 0.0f, mean = 0.0f;

	printf("Enter four numbers: ");
	scanf("%f %f %f %f", &first, &second, &third, &fourth);

	mean = (first*1 + second*2 + third*3 + fourth*4)/10;
	printf("Weighted mean: %.2f\n", mean);
}

//Read balance of an application and print the new one, considering the readjustments of 1%
static void eighth (void)
{
	/* How to calculate increase percentage:
	 * Add the decimal value of the percentage increase to the decimal value of 100%, in another words 1. For example, 0.30 (30%) + 1 (100%) = 1.30 (130%).
	 * Then, finally, multiple the last result and multiply it for the "old" salary. For example, 1500 * 1.30 = 1950.
	 * -----------------------------------------------------------------------------------------------------------------------------
	 * Another reasoning to be follow is, for example, being 30% of 200, the same as 0,30 * 200 = 60, the final result is the sum 200 + 60 = 260.
	 */

	const float READJUSTMENTS = 1.01;
	float balance = 0.0f, new_balance = 0.0f;

	printf("Inform current balance: R$ ");
	scanf("%f", &balance);

	new_balance = balance * READJUSTMENTS;
	printf("After readjustments your current balance is: R$ %.2f\n", new_balance);
}

 /* Enter the base and the height of a rectangle and show the results:
  * Perimeter (Equals the sum of the four sides)
  * Area (Equals base times height)
  */
static void ninth (void)
{
	float base = 0.0f, height = 0.0f, perimeter = 0.0f, area = 0.0f;

	printf("Base of the rectangle: ");
	scanf("%f", &base);

	printf("Height of the rectangle: ");
	scanf("%f", &height);

	perimeter = (base + height) * 2;
	area = base * height;

	printf("The perimeter is: %.2f and the area is %.2f\n", perimeter, area);
}

//Read the radius of a circle and show how output the perimeter (2*π*radius) and the area (π*Raio2)
static void tenth (void)
{
	const float PI = 3.1415;
	float radius = 0.0f, perimeter = 0.0f, area = 0.0f;

	printf("Enter the circle's radius: ");
	scanf("%f", &radius);

	perimeter = 2*(PI*radius);
	area = PI*(radius*radius);

	printf("The circle's area is: %.2f and the perimeter is: %.2f\n", area, perimeter);
}

//Calculate and show the area of a triangle (area is equal to (base * height) divided by 2)
static void eleventh (void)
{
	float area = 0.0f, base = 0.0f, height = 0.0f;

	printf("Enter triangle's base: ");
	scanf("%f", &base);

	printf("Enter triangle's height: ");
	scanf("%f", &height);

	area = (base*height)/2;
	printf("The triangle's area is: %.2f", area);
}

//Calculate the installment's value in arrears, using the formula: INSTALLMENT = VALUE + (VALUE * (RATE/100) * TIME)
static void twelfth (void)
{
	int time = 0;
	float value = 0.0f, installment = 0.0f, rate = 0.0f;

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
 * Build an algorithm that:
 * Read Dollar quotation,
 * Read a value in dollars,
 * Convert this value to Real - BR,
 * Show the result.
 */
static void thirteenth (void)
{
	const float DOLLAR_QUOTATION = 3.4991;
	float vlr_dolar = 0.0f, vlr_real = 0.0f;

	printf("Enter a value in dollars: $ ");
	scanf("%f", &vlr_dolar);

	vlr_real = vlr_dolar * DOLLAR_QUOTATION;
	printf("The value %.2f, in dollars, is equivalent to: R$ %.2f.", vlr_dolar, vlr_real);
}

/*
 * Develop an algorithm that:
 * Read four number,
 * Calculate the square for each one of them,
 * Add all and show the result.
 */
static void fourtenth (void)
{
	int first = 0, second = 0, third = 0, fourth = 0, sum = 0;

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
 * Build an algorithm to commission payment of pieces salesperson, taking note
 * that his commission will be 5% of the total sale and that you have the following data:
 * Salesperson's ID
 * Piece's ID
 * Piece's Unit Price
 * Sold quantity
 */
static void fifteenth (void)
{
	float piece_price = 0.0f, commission = 0.0f, tlt_sale = 0.0f;
	int salesperon_ID = 0, piece_ID = 0, sold_qty = 0;

	printf("Enter salesperson's ID: ");
	scanf("%d", &salesperon_ID);

	printf("Enter piece's ID: ");
	scanf("%d", &piece_ID);

	printf("Enter piece's Unit Price: R$ ");
	scanf("%f", &piece_price);

	printf("Enter sold quantity: ");
	scanf("%d", &sold_qty);

	tlt_sale = sold_qty * piece_price;
	commission =  tlt_sale * 0.05;

	printf("The salesman ID %d due to his total sale equivalent to R$ %.2f will receive R$ %.2f of commission in his payment.\n", salesperon_ID, tlt_sale, commission);
}

/*
 * Develop an algorithm that reads the price of the meat that will be sold and
   the price per kilo. The algorithm must calculate and print the total to be paid,
   the value paid to ICMS (17%) and the net profit for the butcher.
 */
static void sixteenth (void)
{
	float meat_kg = 0.0f, meat_weight = 0.0f, tlt_sale = 0.0f, icms = 0.0f, net_profit = 0.0f;

	printf("Enter meat's weight: ");
	scanf("%f", &meat_weight);

	printf("Enter meat's price (kilograms): ");
	scanf("%f", &meat_kg);

	tlt_sale = meat_weight * meat_kg;
	icms = tlt_sale * 0.017;
	net_profit = tlt_sale - icms;

	printf("Total: R$ %.2f, ICMS: R$ %.2f, net profit: R$ %.2f.\n", tlt_sale, icms, net_profit);
}

//Write an algorithm to exchange the values of two variables between themselves.
static void seventeenth (void)
{
	int a = 0, b = 0, aux = 0;

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
 * Write an algorithm that reads the data for the screw A and screw B, that's to say,
 * the ID, the number of pieces and the unit value of each screw and the percentage of IPI to be added.
 * Calculate and write the total value to be paid for each piece and the overall total.
 */
static void eighteenth (void)
{
	int screwA_ID = 0, screwB_ID = 0, screwA_qty = 0, screwB_qty = 0;
	float screwA_UValue = 0.0f, screwB_UValue = 0.0f, ipi = 0.0f, screwA_tlt = 0.0f, screwB_tlt = 0.0f, tlt_value = 0.0f;

	printf("Screw A's ID: ");
	scanf("%d", &screwA_ID);

	printf("Screw B's ID: ");
	scanf("%d", &screwB_ID);

	printf("Screw A's quantity: ");
	scanf("%d", &screwA_qty);

	printf("Screw B's quantity: ");
	scanf("%d", &screwB_qty);

	printf("Screw A's unit value: R$ ");
	scanf("%f", &screwA_UValue);

	printf("Screw B's unit value: R$ ");
	scanf("%f", &screwB_UValue);

	printf("IPI percentage: ");
	scanf("%f", &ipi);

	screwA_tlt = screwA_qty * screwA_UValue;
	screwA_tlt = screwA_tlt + (screwA_tlt * ipi)/100;

	//Another way to write the equation above: screwA_tlt = (screwA_qty * screwA_UValue) * (ipi/100+1)

	screwB_tlt = screwB_qty * screwB_UValue;
	screwB_tlt = screwB_tlt + (screwB_tlt * ipi)/100;

	tlt_value = screwA_tlt * screwB_tlt;

	printf("Screw A's total value: R$ %.2f. Screw B's total value: R$ %.2f. Overall total: R$ %.2f.\n", screwA_tlt, screwB_tlt, tlt_value);
}

//Calculate and introduce the volume and an Oil can, considering the volume = (3.14159*R^2*Height)
static void nineteenth (void)
{
	const float PI = 3.14159;
	float radius = 0.0f, height = 0.0f, volume = 0.0f;

	printf("Enter radius: ");
	scanf("%f", &radius);

	printf("Enter height: ");
	scanf("%f", &height);

	volume = (PI * (radius * radius)) * height;
	printf("The volume of an Oil can is: %f", volume);
}

/* Make an algorithm that reads the three grades of a student and calculate the final mean of this student.
 * Consider that the weighted mean and the grades' weight are: 2,3 e 5, respectively.
 */
static void twentieth (void)
{
	float first = 0.0f, second = 0.0f, third = 0.0f, mean = 0.0f;

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
 * The cost to the costumer of a new car is the sum of the factory cost with the percentage of the distributor and taxes (applied to the factory cost).
 * Assuming that the percentage of the distributor is 28% and taxes are 45%, write an algorithm that reads the factory cost of a car and write the cost to the costumer.
 */
static void twenty_first (void)
{
	float factoryCost = 0.0f, customerCost = 0.0f, distroPercentage = 0.0f, tax = 0.0f;

	printf("Enter Car's factory cost: R$ ");
	scanf("%f", &factoryCost);

	distroPercentage = factoryCost * 1.28;
	tax = factoryCost * 1.45;

	customerCost = factoryCost + distroPercentage + tax;
	printf("The Customer's cost is: R$ %f", customerCost);
}

//Make an algorithm that reads the duration of an event at a factory expressed in seconds and show it expressed in hours, minutes.
static void twenty_second (void)
{
	int hours = 0, minutes = 0, seconds = 0;

	printf("Enter duration (in seconds): ");
	scanf("%d", &seconds);

	hours = (int)(seconds/3600);
	minutes = (int)(seconds/60);

	printf("Event duration is (HH:SS): %d: %d", hours, minutes);
}

/*
 * Write an algorithm that reads the number of an employee, your number of worked hours, the value received per hour
 * and calculate the salary of this employee. Next, show the employee's number and salary. */
static void twenty_third (void)
{
	int employee_ID = 0, workedHours = 0;
	float hoursValue = 0.0f, salary = 0.0f;

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
 * Write an algorithm that reads the ID of a salesperson, his fixed salary and total of sales made in the month (in cash).
 * Knowing that this salesperson gets 15% commission on his sales made, inform his salary at the end of the month.
 * Discount also 8% of INSS and 6% of transit pass.
 */
static void twenty_fourth (void)
{
	int salesman_ID = 0;
	float fixed_salary = 0.0f, tlt_sale = 0.0f, inss = 0.0f, transit_pass = 0.0f, lqd_salary = 0.0f;

	printf("Salesman's ID: ");
	scanf("%d", &salesman_ID);

	printf("Fixed salary: R$ ");
	scanf("%f", &fixed_salary);

	printf("Total of sales in this month: R$ ");
	scanf("%f", &tlt_sale);

	inss = fixed_salary * 0.08;
	transit_pass = fixed_salary * 0.06;

	lqd_salary = (((tlt_sale * 1.15) + fixed_salary) - inss) - transit_pass;
	printf("The employee ID %d will receive R$ %.2f as payment at the end of the month.\n", salesman_ID, lqd_salary);
}


//Sequential algorithms menu
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










/*Berechnung der Einkommenssteuer

a) Lohnsteuerbetrag und durchschnittlicher Steuersatz in Prozent

LST - Staffelung:  0 bis 11000 = > 0 %;           11001 bis 18000 = > 20 % %;

18001 bis 31000 = > 35 %;        31001 bis 60000 = > 42 %

60001 bis 90000 = > 48 %;        90001  bis 1000000 = > 50 %

ab 1000001 = > 55 % */

#include<stdio.h>

int main() {
	float income;
	float tax;


	printf("Einkommenssteuer\n");
	printf("Geben sie das Einkommen ein: \n");
	scanf("%f", &income);


	if (income > 1000000)
	{
		tax = (income - 1000000) * 0.55 + 910000 * 0.5 + 30000 * 0.48 + 29000 * 0.42 + 13000 * 0.35 + 7000 * 0.2;
	}

	else if (income > 90000)
	{
		tax = (income - 90000) * 0.5 + 30000 * 0.48 + 29000 * 0.42 + 13000 * 0.35 + 7000 * 0.2;
	}
	else if (income > 60000)
	{
		tax = (income - 60000) * 0.48 + 30000 * 0.42 + 13000 * 0.35 + 7000 * 0.2;
	}

	else if (income > 31000)
	{
		tax = (income - 31000) * 0.42 + 13000 * 0.35 + 7000 * 0.2;
	}
	else if (income > 18000)
	{
		tax = (income - 18000) * 0.35 + 7000 * 0.2;
	}
	else if (income > 11000)
	{
		tax = (income - 11000) * 0.2;
	}


	printf("Einkommenssteuer beträgt: %f \n", tax);

	return 0;
}

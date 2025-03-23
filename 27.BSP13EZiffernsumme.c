/*
 * Titel: BSP13e
 * Aufgabenstellung: Ziffernsumme einer Zahl (while)
 * Eingabe: Zahl
 * Ausgabe: Quersummer der einzelnen Ziffern der eingegebenen Zahl
 */
#include <stdio.h>

int main()
{
	int eingabe, zahl, summe = 0;

	printf("Ziffernsummer einer Zahl\n");
	printf("========================\n\n");

	printf("Geben Sie bitte die Zahl ein: ");
	scanf("%d", &eingabe);

	zahl = eingabe;
	while (zahl > 0)
	{
		summe = summe + (zahl % 10);
		zahl = zahl / 10;
	}

	printf("\nDie Ziffernsumme der Zahl %d lautet: %d",
		eingabe, summe);


	return 0;
}
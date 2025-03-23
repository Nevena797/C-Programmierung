/* TINF 2 - Programmieren C
BSP06: while-Schleife: Mittelwert
Aufgabenstellung: Mittelwert:
 Mit einer while-Schleife solange Werte einlesen, bis der Wert=0 eingegeben wird.
 Ausgabe: Anzahl der eingegebenen Werte und deren Mittelwert
 Anmerkung: Achtung auf Division durch Null
*/
#include <stdio.h>
int main(void)
{
	int wert;
	float summe = 0;
	float mittelwert;
	int anzahl = 0;
	printf("\nBerechnung des Mittelwertes\n");
	printf("===========================\n");
	printf("Geben Sie Wert ein (0 Exit bzw. berechnen): ");
	scanf("%d", &wert);
	while (wert != 0)
	{
		anzahl++;
		summe = summe + wert;
		printf("Geben Sie Wert ein (0 Exit bzw. berechnen): ");
		scanf("%d", &wert);
	}
	if (anzahl != 0)
	{
		mittelwert = summe / (float)anzahl;
		printf("Sie haben %d Wert eingegeben der Mittelwert ist %10.3f \n", anzahl, mittelwert
		);
	}
	else
	{
		printf("Es wurden keine Werte eingegeben \n");
	}
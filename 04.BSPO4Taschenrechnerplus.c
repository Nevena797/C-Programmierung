/*
TINF2 - Programmierung C
BSP03: Taschenrechner mittels if-Befehl
Eingabe: Zahl1, Zahl2 und Operator ('+', '-', '*', '/')
Ausgabe: Ergebnis
*/
#include <stdio.h>
int main()
{
	int zahl1, zahl2;
	float ergebnis = 0;
	char funktion;
	printf("Geben sie die Rechenoperation ein[+,-,*,/]: \n");
	scanf("%c", &funktion);
	printf("Zahl 1 eingeben: ");
	scanf("%d", &zahl1);
	printf("Zahl 2 eingeben: ");
	scanf("%d", &zahl2);
	if (funktion == '+')
	{
		ergebnis = zahl1 + zahl2;
	}
	if (funktion == '-')
	{
		ergebnis = zahl1 - zahl2;
	}
	if (funktion == '*')
	{
		ergebnis = zahl1 * zahl2;
	}
	if ((funktion == '/') && (zahl2 != 0)) //Achtung: Division durch Null
	{
		ergebnis = zahl1 / (float)zahl2;
	}
	if (zahl2 != 0)
		printf("Das Ergebnis von %d %c %d = %f\n", zahl1, funktion, zahl2, ergebnis);
	else
		printf("Division durch Null ist nicht erlaubt!\n");
}
#include <stdio.h>
int main()
{
	float zahl1, zahl2, ergebnis;
	char funktion;
	printf("Geben sie die Rechenoperation ein[+,-,*,/]: \n");
	scanf("%c", &funktion);
	printf("Zahl 1 eingeben: ");
	scanf("%f", &zahl1);
	printf("Zahl 2 eingeben: ");
	scanf("%f", &zahl2);
	switch (funktion)
	{
	case '+': ergebnis = zahl1 + zahl2;
		printf("Das Ergebnis von %f %c %f = %f\n", zahl1, funktion, zahl2, ergebnis);
		break;
	case '-': ergebnis = zahl1 - zahl2;
		printf("Das Ergebnis von %f %c %f = %f\n", zahl1, funktion, zahl2, ergebnis);
		break;
	case '*': ergebnis = zahl1 * zahl2;
		printf("Das Ergebnis von %f %c %f = %f\n", zahl1, funktion, zahl2, ergebnis);
		break;
	case '/': ergebnis = zahl1 / zahl2;
		if (zahl2 != 0)
			printf("Das Ergebnis von %f %c %f = %f\n", zahl1, funktion, zahl2, ergebnis);
		else
			printf("Division durch Null ist nicht erlaubt!\n");
		break;
	default: printf("Diese Funktion ist noch nicht realisiert!\n");
	}
}
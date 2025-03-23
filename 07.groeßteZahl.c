/*************************************************************
BSP5c: Größte Zahl
 Eingabe: drei Ganzzahlen
 Ausgabe: die größte Zahl dieser drei Zahlen
**************************************************************
*****************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int zahl1 = 0, zahl2 = 0, zahl3 = 0, groessteZahl = 0;

	printf("Geben Sie bitte die 1. Zahl ein! ");
	scanf("%d", &zahl1);
	printf("Geben Sie bitte die 2. Zahl ein! ");
	scanf("%d", &zahl2);
	printf("Geben Sie bitte die 3. Zahl ein! ");
	scanf("%d", &zahl3);

	if ((zahl1 < zahl3) && (zahl2 < zahl3))
		groessteZahl = zahl3;
	if ((zahl1 < zahl2) && (zahl3 < zahl2))
		groessteZahl = zahl2;
	if ((zahl2 < zahl1) && (zahl3 < zahl1))
		groessteZahl = zahl1;
	printf("Die größte Zahl lautet: %d\n", groessteZahl);
	return 0;
}

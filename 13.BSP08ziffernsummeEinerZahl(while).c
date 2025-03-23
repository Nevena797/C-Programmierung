/* TINF 2 - Programmieren C
BSP08: Ziffernsumme einer Zahl (while)
 Eingabe: Zahl
 Ausgabe: Quersummer der einzelnen Ziffern der eingegebenen Zahl
 z.B. Zahl 347
 Ziffernsumme = 3+4+7 =14
*/
#include <stdio.h>
int main(void)
{
	int eingabe;
	int zahl;
	int quersumme = 0;
	printf("Ziffernsumme\n");
	printf("============\n");
	printf("Geben Sie eine Zahl ein : ");
	scanf("%d", &eingabe);
	zahl = eingabe;
	while (zahl > 0)
	{
		quersumme = quersumme + (zahl % 10); //Rest bei Ganzzahldivision durch 10
		zahl = zahl / 10;
	}
	printf(" Die Ziffernsumme von der Zahl %d lautet: %d \n", eingabe, quersumme);
}
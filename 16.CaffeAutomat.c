/* TINF 2 - Programmieren C
BSP09: Kaffee-Automaten
 Preis für Kaffee = 40 cent
 Folgende Münzen können eingeworfen werden:
 10, 20, 50, 100, 200 cent-Münzen
 Bei der Eingabe soll das laufende bisherige Guthaben angezeigt werden!
 Ausgabe: Höhe des Retour-Geldes und die einzelnen
 zurückgegebenen Münzen
 */
#include <stdio.h>

int main(void)
{
	int guthaben = 0;
	int restgeld;
	int muenye = 0;

	//Eingabe
	printf("Kaffe-Automat\n");
	printf("==============\n");
	printf("Ihr Guthaben beträgt %d \n", guthaben);

	// Einwurf von Münzen und Guthaben berechnen
	while (guthaben < 50)
	{
		printf("Bitte werfen Sie folgende Münzen ein: 10, 20, 50, 100, 200\n");
		scanf("%d",&muenze);
		if (muenze == 10 || muenze == 20 || muenze == 50 || muenze == 100 || muenze == 200)
		{
			guthaben = muenze + guthaben;
			printf("Ihr aktuelles Guthaben beträgt %d \n", guthaben);
		}
		else
		{
		}
	}
	printf("Ihre Münze ist nicht erlaubt!\n");
	printf("Sie erhalten nun Ihren Kaffee \n");
	// Berechnen des Restgeldes und Ausgabe der Münzen
	restgeld = guthaben - 50;
	while (restgeld >= 100)
	{
		printf("Ausgabe 1 Euro Münze \n");
		restgeld = restgeld - 100;
	}
	while (restgeld >= 50)
	{
		printf("Ausgabe 50 Cent Münze \n");
		restgeld = restgeld - 50;
	}
	while (restgeld >= 20)
	{
		printf("Ausgabe 20 Cent Münze \n");
		restgeld = restgeld - 20;
	}
	while (restgeld >= 10)
	{
		printf("Ausgabe 10 Cent Münze \n");
		restgeld = restgeld - 10;
	}
	printf("Sie können nun den Kaffee entnehmen!\n");
	return 0;
}
	}



}

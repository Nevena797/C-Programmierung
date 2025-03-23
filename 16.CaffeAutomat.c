/* TINF 2 - Programmieren C
BSP09: Kaffee-Automaten
 Preis f�r Kaffee = 40 cent
 Folgende M�nzen k�nnen eingeworfen werden:
 10, 20, 50, 100, 200 cent-M�nzen
 Bei der Eingabe soll das laufende bisherige Guthaben angezeigt werden!
 Ausgabe: H�he des Retour-Geldes und die einzelnen
 zur�ckgegebenen M�nzen
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
	printf("Ihr Guthaben betr�gt %d \n", guthaben);

	// Einwurf von M�nzen und Guthaben berechnen
	while (guthaben < 50)
	{
		printf("Bitte werfen Sie folgende M�nzen ein: 10, 20, 50, 100, 200\n");
		scanf("%d",&muenze);
		if (muenze == 10 || muenze == 20 || muenze == 50 || muenze == 100 || muenze == 200)
		{
			guthaben = muenze + guthaben;
			printf("Ihr aktuelles Guthaben betr�gt %d \n", guthaben);
		}
		else
		{
		}
	}
	printf("Ihre M�nze ist nicht erlaubt!\n");
	printf("Sie erhalten nun Ihren Kaffee \n");
	// Berechnen des Restgeldes und Ausgabe der M�nzen
	restgeld = guthaben - 50;
	while (restgeld >= 100)
	{
		printf("Ausgabe 1 Euro M�nze \n");
		restgeld = restgeld - 100;
	}
	while (restgeld >= 50)
	{
		printf("Ausgabe 50 Cent M�nze \n");
		restgeld = restgeld - 50;
	}
	while (restgeld >= 20)
	{
		printf("Ausgabe 20 Cent M�nze \n");
		restgeld = restgeld - 20;
	}
	while (restgeld >= 10)
	{
		printf("Ausgabe 10 Cent M�nze \n");
		restgeld = restgeld - 10;
	}
	printf("Sie k�nnen nun den Kaffee entnehmen!\n");
	return 0;
}
	}



}

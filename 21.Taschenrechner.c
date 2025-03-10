/* BSP13: Funktionen - Taschenrechner

Schreiben Sie Ihr Taschenrechnerprogramm so um, dass folgende Funktionen vorhanden sind:

a) int einlesenWerte (float *zahl1, float *zahl2){ }

b) int ausgabeErgebnis (float ergebnis){ }

c) int addiere (float zahl1, float zahl2, float *ergebnis){ }

d) int subtrahiere (float zahl1, float zahl2, float *ergebnis){ }

e) float multipliziere (float zahl1, float zahl2){ }

f) float dividiere (float zahl1, float zahl2){ }

usw.*/
#include <stdio.h>
#include <math.h>



int einlesenWerte(float* zahl1, float* zahl2)
{
	printf("Zahl1 eingeben: ");
	scanf("%f", zahl1);         // oder:  scanf("%f",&*zahl1);
	printf("Zahl2 eingeben: ");
	scanf("%f", zahl2);
}

int ausgabeErgebnis(float ergebnis)
{
	printf("%.2f\n", ergebnis);

}

int addiere(float zahl1, float zahl2, float* ergebnis)
{
	*ergebnis = zahl1 + zahl2;
	return 0;
}

int subtrahiere(float zahl1, float zahl2, float* ergebnis)
{
	*ergebnis = zahl1 - zahl2;
	return 0;
}
float multipliziere(float zahl1, float zahl2)
{
	return zahl1 * zahl2;
}

float dividiere(float zahl1, float zahl2)
{
	if (zahl2 == 0)
	{
		printf("Division durch 0 nicht möglich!!!\n");
		printf("\n");
		return 0;
	}
	return zahl1 / zahl2;
}



int main()
{
	char operand;
	float ergebnis = 0;
	float zahl1;
	float zahl2;

	printf("Taschenrechner\n");
	printf("==============\n");
	printf("\n");

	printf("Bitte w�hlen Sie den Operand(+,-,*,/): ");
	scanf("%c", &operand);

	einlesenWerte(&zahl1, &zahl2);
	printf("\n");
	switch (operand)
	{
	case '+':
		addiere(zahl1, zahl2, &ergebnis);
		break;
	case '-':
		subtrahiere(zahl1, zahl2, &ergebnis);
		break;
	case '*':
		ergebnis = multipliziere(zahl1, zahl2);
		break;
	case '/':

		if (zahl2 == 0)
			printf("Division durch Null ist nicht erlaubt!\n");
		else
			ergebnis = dividiere(zahl1, zahl2);
		break;
	default:
		printf("Falscher Operator!\n");
		break;
	}

	ausgabeErgebnis(ergebnis);
	return 0;

}




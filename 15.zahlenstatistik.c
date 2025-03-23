* TINF2 - Programmieren C
* BSP10b: Zahlenstatistik2(Testvorbereitung)
*
*Schreiben Sie ein Programm, welches in einer while - Schleife positive Ganzzahlen einliest.
* Wenn die Zahl 0 eingegeben wird, wird das Programm beendet.
* Es sollen folgende Werte berechnet und ausgegeben werden :
*a) Summe der eingegebenen ungeraden Zahlen(gerade ==> Zahl nicht durch 2 teilbar)
* b) Anzahl der eingegebenen ungeraden Zahlen
* c) Mittelwert der ugeraden Zahlen(Genauigkeit: zwei Nachkommastellen)
*
* d) Größte eingegebene Zahl
* e) Zweitgrößte eingegebene Zahl
* f) Kleinste eingegebene Zahl
* g) Differenz zwischen der größten und der kleinsten Zahl
*
************************************************************* /

#include <stdio.h>

int main(void)
{
    int zahl;
    int summe = 0;
    int anzahl = 0;
    float mittelwert = 0.0;
    int max1 = 0;
    int max2 = 0;
    int min = 0;
    int differenz;

    printf("Zahl eingeben (0 Exit): ");
    scanf("%d", &zahl);
    min = zahl; //kleinste Zahl

    while (zahl != 0)
    {
        if (zahl % 2 == 1) // nur ungerade Zahlen
        {
            summe += zahl; // Summe der ungerade Zahlen
            anzahl++; // Anzahl der ungeraden Zahlen
        }

        if (zahl > max1) // größte und zweitgrößte Zahl
        {
            max2 = max1;
            max1 = zahl;
        }
        else if ((zahl <= max1) && (zahl > max2))
            max2 = zahl;

        if (zahl < min) // kleinste Zahl
        {
            min = zahl;
        }

        printf("Zahl eingeben (0 Exit): "); //Eingabe der nächsten Zahl
        scanf("%d", &zahl);
    }

    if (anzahl != 0)
        mittelwert = (float)summe / (float)anzahl; //Mittelwert

    differenz = max1 - min;

    printf("Summe der ungeraden Zahlen = %d\n", summe);
    printf("Anzahl der ungeraden Zahlen = %d\n", anzahl);
    printf("Mittelwert der ungeraden Zahlen = %.2f\n", mittelwert);
    printf("Größte eingegebene Zahl = %d\n", max1);
    printf("Zweitgrößte eingegebe Zahl = %d\n", max2);
    printf("Kleinste eingegebe Zahl = %d\n", min);
    printf("Differenz zwischen min und max = %d\n", differenz);

    return 0;
}
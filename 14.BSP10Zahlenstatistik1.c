/* TINF2 - Programmieren C
 * BSP10: Zahlenstatistik
 *
 * Schreiben Sie ein Programm, welches in einer while-Schleife positive Ganzzahlen einliest.
 * Wenn die Zahl 0 eingegeben wird, wird das Programm beendet.
 * Es sollen folgende Werte berechnet und ausgegeben werden:
 * a) Summe der eingegebenen geraden Zahlen (gerade ==> Zahl durch 2 teilbar)
 * b) Anzahl der eingegebenen geraden Zahlen
 * c) Mittelwert der geraden Zahlen (Genauigkeit: zwei Nachkommastellen)
 * d) Größte eingegebene Zahl
 * e) Zweitgrößte eingegebene Zahl
 *
 * Anmerkung: Achten Sie darauf, dass es zu keiner Division durch Null kommt!
 *
 * Beispiel:
 * Eingabe der Zahlen: 2 3 4 6 7 10 11
 * Summe = 2 + 4 + 6 + 10 = 22
 * Anzahl = 4
 * Mittelwert= 5,50
 * Größte Zahl = 11
 * Zweitgrößte Zahl = 10
 */

#include <stdio.h>

int main(void)
{
    int zahl;
    int summe = 0;
    int anzahl = 0;
    float mittelwert = 0.0;
    int max1 = 0;
    int max2 = 0;

    printf("Zahl eingeben (0 Exit): ");
    scanf("%d", &zahl);

    while(zahl != 0)
    {
        if(zahl % 2 == 0) // nur gerade Zahlen
        {
            summe += zahl;
            anzahl++;
        }

        if (zahl > max1)
        {
            max2 = max1;
            max1 = zahl;
        }
        else if ((zahl <= max1) && (zahl > max2))
            max2 = zahl;

        printf("Zahl eingeben (0 Exit): ");
        scanf("%d", &zahl);
    }

    if (anzahl != 0)
        mittelwert = (float)summe / (float)anzahl;

    printf("Summe = %d\n", summe);
    printf("Anzahl = %d\n", anzahl);
    printf("Mittelwert = %.2f\n", mittelwert);
    printf("Größte Zahl = %d\n", max1);
    printf("Zweitgrößte Zahl = %d\n", max2);
    
    return 0;
}

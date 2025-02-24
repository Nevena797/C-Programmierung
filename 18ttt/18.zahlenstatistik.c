#include <stdio.h>  // Korrektur: stdio.h statt studio.h

int main(void)
{
    int zahl;
    int summe = 0;
    int anzahl = 0;
    float mittelwert = 0;
    int max1 = 0;
    int max2 = 0;

    printf("Zahl eingeben (0 Exit): ");
    scanf("%d", &zahl);  // Korrektur: Format-String "%d" statt "d"

    while (zahl != 0)
    {
        // Nur gerade Zahlen verarbeiten
        if (zahl % 2 == 0)
        {
            summe += zahl;
            anzahl++;
        }

        // Bestimme die größte und zweitgrößte Zahl
        if (zahl > max1)
        {
            max2 = max1;
            max1 = zahl;
        }
        else if (zahl > max2 && zahl < max1)  // Logisch korrekter Vergleich
        {
            max2 = zahl;
        }

        // Berechnung des Mittelwerts, sofern mindestens eine Zahl verarbeitet wurde
        if (anzahl != 0)
            mittelwert = (float)summe / anzahl;

        printf("Summe = %d\n", summe);
        printf("Anzahl = %d\n", anzahl);
        printf("Mittelwert = %.2f\n", mittelwert);
        printf("Größte Zahl = %d\n", max1);
        printf("Zweitgrößte Zahl = %d\n", max2);

        // Neue Eingabe abfragen
        printf("Zahl eingeben (0 Exit): ");
        scanf("%d", &zahl);
    }

    return 0;
}

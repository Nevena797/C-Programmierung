/*Int - Array(Zahlenfeld)

a) Eingabe von 5 Zahlen in ein INT - array

b) Ausgabe

c) Ausgabe in verkehrter Reihenfolge

d) Summe

e) Mittelwert

f) größte und kleinste Zahl

g) Sortieren

Zusatzaufgaben :

h) Summe der Abstände zwischen zwei benachbare Zahlen
zb.  3  5  7  2  1 = Abstand 2 + 2 + 5 + 1 = 10

i) Doppelt vorkommende Werte sollen auf - 1 gesetzt werden und dann ans Ende verschoben werden.

*/
#include <stdio.h>

#define LENGTH 5  // Konstante für die Array-Länge

int main(void)
{
    int zahlen[LENGTH];
    int sum = 0;
    double mittelwert;
    int min, max;
    int i, j;

    // 1. Einlesen der Werte
    for (i = 0; i < LENGTH; i++)
    {
        printf("Bitte geben Sie die %d. Zahl ein: ", i + 1);
        scanf("%d", &zahlen[i]);
    }

    // 2. Min, Max und Summe berechnen
    min = zahlen[0];
    max = zahlen[0];

    printf("\nOriginale Reihenfolge:\n");
    for (i = 0; i < LENGTH; i++)
    {
        printf("%d ", zahlen[i]);
        sum += zahlen[i];

        if (zahlen[i] < min) min = zahlen[i];
        if (zahlen[i] > max) max = zahlen[i];
    }

    mittelwert = (double)sum / LENGTH;  // Gleitkommazahl für genaueren Mittelwert

    // 3. Umgekehrte Reihenfolge ausgeben
    printf("\nUmgekehrte Reihenfolge:\n");
    for (i = LENGTH - 1; i >= 0; i--)
    {
        printf("%d ", zahlen[i]);
    }

    // 4. Ergebnisse ausgeben
    printf("\n\nSumme: %d", sum);
    printf("\nDurchschnitt: %.2f", mittelwert);
    printf("\nMinimum: %d", min);
    printf("\nMaximum: %d\n", max);

    // 5. Array sortieren (Bubble-Sort)
    for (i = 0; i < LENGTH - 1; i++)
    {
        for (j = 0; j < LENGTH - i - 1; j++)
        {
            if (zahlen[j] > zahlen[j + 1])
            {
                int temp = zahlen[j];
                zahlen[j] = zahlen[j + 1];
                zahlen[j + 1] = temp;
            }
        }
    }

    // 6. Sortierte Ausgabe
    printf("\nSortierte Reihenfolge:\n");
    for (i = 0; i < LENGTH; i++)
    {
        printf("%d ", zahlen[i]);
    }

    printf("\n");
    return 0;
}


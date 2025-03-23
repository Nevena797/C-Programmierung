/******************************************************************************
BSP13b:
Berechnung der Fibonacci-Zahlen
Eingabe: Anzahl der auszugebenen Zahlen (Forschleife)
Ausgabeformat: 1, 1, 2, 3, 5, 8, 13 ...

Anmerkung:
eine bestimmte Zahl setzt sich aus der Summe seiner zwei Vorg�nger zusammen.
Zahl1=1;
Zahl2=1;
Zahl3 = Zahl1+Zahl2;

2 = 1 + 1
3 = 2 + 1
5 = 3 + 2
8 = 5 + 3
13 = 8 + 5
Wenn Sie als Anzahl den Wert 5 eingeben, so soll von der Fibonacci-Zahlenfolge
die ersten f�nf Zahlen ausgegeben werden: dh. bei Anzahl 5   ==> 1, 1, 2, 3 ,5

*******************************************************************************/
#include <stdio.h>
int fib(int anzahl)
{
    int i, zahl1, zahl2, zahl3;

    printf("Fibonacci-Zahlen\n");
    zahl1 = 1;
    zahl2 = 1;

    for (i = 1; i <= anzahl; i++)
    {
        zahl3 = zahl1 + zahl2;
        printf("%d ", zahl1);
        zahl1 = zahl2;
        zahl2 = zahl3;
    }
    printf("\n");
    return 0;
}

int main()
{
    int anzahl;
    printf("Wieviele Fibonacci-Zahlensollen ausgegeben werden?");
    scanf("%d", &anzahl);
    fib(anzahl);

    return 0;
}
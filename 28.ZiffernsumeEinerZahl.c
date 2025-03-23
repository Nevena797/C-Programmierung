/*
 * Titel: BSP13e
 * Aufgabenstellung: Ziffernsumme einer Zahl (while)
 * Eingabe: Zahl
 * Ausgabe: Quersummer der einzelnen Ziffern der eingegebenen Zahl
 * Version: 1.0
 */
#include <stdio.h>
#include <math.h>

int berechneZiffernsumme(int zahl) {
    int summe = 0;
    while (zahl > 0) {
        summe += zahl % 10;
        zahl /= 10;
    }
    return summe;
}

int main() {
    int eingabe;

    printf("Ziffernsumme einer Zahl\n");
    printf("========================\n\n");

    printf("Geben Sie bitte die Zahl ein: ");
    scanf("%d", &eingabe);

    int summe = berechneZiffernsumme(eingabe);

    printf("\nDie Ziffernsumme der Zahl %d lautet: %d\n", eingabe, summe);

    return 0;
}

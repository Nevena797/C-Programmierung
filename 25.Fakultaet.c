#include <stdio.h>

// Funktion zur Berechnung der Fakultät
void fakultaet(int x, int* ergebnis) {
    if (x < 0) {
        printf("Fehler: Fakultät ist nur für x >= 0 definiert!\n");
        *ergebnis = -1; // Fehlerwert setzen
        return;
    }

    *ergebnis = 1;
    for (int i = 1; i <= x; i++) {
        *ergebnis *= i;
    }
}

int main() {
    int x, ergebnis;

    printf("Fakultät\n");
    printf("Bitte geben Sie den X-Wert ein: ");
    scanf("%d", &x);

    fakultaet(x, &ergebnis);

    if (ergebnis != -1) { // Fakultät nur ausgeben, wenn kein Fehler aufgetreten ist
        printf("Die Fakultät von %d lautet %d.\n", x, ergebnis);
    }

    return 0;
}


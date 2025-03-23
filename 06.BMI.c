BSP11: BMI(Body Mass Index)

Eingabe : Größe in Meter;

Gewicht in KG

Ausgabe : BMI - Zahl
Auswertung :
bis 17, 5 : erhebliches Untergewicht
bis 18, 5 : leichtes Untergewicht
bis 25 : Normalgewicht
bis 30 : leichtes Übergewicht
bis 35 : starkes Übergewicht
über 35 : nettes Übergewicht

Berechnung BMI : BMI = Gewicht / (Größe * Größe)

#include <stdio.h>

int main() {
    // Variablen für Gewicht, Größe und BMI
    float gewicht, groesse, bmi;

    // Eingabe: Größe in Meter
    printf("Geben Sie Ihre Größe in Meter ein: ");
    scanf("%f", &groesse);

    // Eingabe: Gewicht in Kilogramm
    printf("Geben Sie Ihr Gewicht in Kilogramm ein: ");
    scanf("%f", &gewicht);

    // Berechnung des BMI
    bmi = gewicht / (groesse * groesse);

    // Ausgabe der BMI-Zahl
    printf("Ihr BMI ist: %.2f\n", bmi);

    // Auswertung des BMI
    if (bmi <= 17.5) {
        printf("Ergebnis: Erhebliches Untergewicht\n");
    }
    else if (bmi <= 18.5) {
        printf("Ergebnis: Leichtes Untergewicht\n");
    }
    else if (bmi <= 25) {
        printf("Ergebnis: Normalgewicht\n");
    }
    else if (bmi <= 30) {
        printf("Ergebnis: Leichtes Übergewicht\n");
    }
    else if (bmi <= 35) {
        printf("Ergebnis: Starkes Übergewicht\n");
    }
    else {
        printf("Ergebnis: Nettes Übergewicht\n");
    }

    return 0;
}



BSP11: BMI(Body Mass Index)

Eingabe : Gr��e in Meter;

Gewicht in KG

Ausgabe : BMI - Zahl
Auswertung :
bis 17, 5 : erhebliches Untergewicht
bis 18, 5 : leichtes Untergewicht
bis 25 : Normalgewicht
bis 30 : leichtes �bergewicht
bis 35 : starkes �bergewicht
�ber 35 : nettes �bergewicht

Berechnung BMI : BMI = Gewicht / (Gr��e * Gr��e)

#include <stdio.h>

int main() {
    // Variablen f�r Gewicht, Gr��e und BMI
    float gewicht, groesse, bmi;

    // Eingabe: Gr��e in Meter
    printf("Geben Sie Ihre Gr��e in Meter ein: ");
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
        printf("Ergebnis: Leichtes �bergewicht\n");
    }
    else if (bmi <= 35) {
        printf("Ergebnis: Starkes �bergewicht\n");
    }
    else {
        printf("Ergebnis: Nettes �bergewicht\n");
    }

    return 0;
}



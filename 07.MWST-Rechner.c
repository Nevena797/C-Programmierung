/*************************************************************
   BSP5b: MWST-Rechner:

   Eingabe: Betrag und ('n' oder 'b' f�r Netto oder Brutto)

   Ausgabe: Nettobetrag, UST, Bruttobetrag

*************************************************************/
#include <stdio.h>

int main()
{
    float netto, mwst, brutto, betrag;
    char b_n_typ;

    // Einleitung
    printf("Mehrwertsteuer-Berechnung\n");
    printf("=========================\n\n");

    // Eingabe des Betrags
    printf("Geben Sie bitte den Betrag ein: ");
    scanf("%f", &betrag);

    // Eingabe ob Brutto oder Netto
    printf("Handelt es sich bei diesem Betrag um Brutto- oder Netto-Wert (b/n)? ");
    scanf(" %c", &b_n_typ); // Leerzeichen vor %c f�r saubere Eingabe

    // Berechnung je nach Eingabe
    if (b_n_typ == 'b' || b_n_typ == 'B') // Gro�- und Kleinschreibung ber�cksichtigen
    {
        brutto = betrag;
        netto = brutto / 1.2;  // Netto-Betrag aus Brutto berechnen
    }
    else if (b_n_typ == 'n' || b_n_typ == 'N')
    {
        netto = betrag;
        brutto = netto * 1.2;  // Brutto-Betrag aus Netto berechnen
    }
    else
    {
        printf("Ung�ltige Eingabe! Bitte 'b' f�r Brutto oder 'n' f�r Netto eingeben.\n");
        return 1; // Fehlercode, um zu signalisieren, dass die Eingabe ung�ltig war
    }

    // Mehrwertsteuer berechnen (20%)
    mwst = brutto - netto;

    // Ausgabe der Ergebnisse
    printf("\nNettowert:  %.2f\n", netto);
    printf("MWST:       %.2f\n", mwst);
    printf("Bruttowert: %.2f\n", brutto);

    return 0;
}

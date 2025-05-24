//// 35.Zeugnisnoten.cpp : 
//Zeugnisnoten; Folgende Funktionen sind zu realisieren :

//a) Eingabe: Einlesen von Name, DNote, MNote, ENote;

//b) ErfolgErmitteln: Berechnen ob : nicht bestanden, bestanden, guter Erfolg, ausgezeichnerter Erfolg

//c) Ausgabe: folgende Werte ausgeben : Name, DNote, MNote, ENote und Erfolg;


//Zusatzaufgabe:

//d) Erweitern Sie das Programm so, dass mit einem "array" von Schülern gearbeitet wird.

//e) Berechnen Sie für diese Klasse die Durchschnittsnote pro Gegenstand

//Anmerkung : Alle Werte sollen als Parameter in einer einzigen Struktur übergeben werden.


#include <stdio.h>
#include <string.h>

struct student {
    char name[20];
    int DNote;
    int NNote;
    int ENote;
    char erfolg[30]; // auf 30 erhöhen, um langen Text zu speichern
};

struct student eingabe() {
    struct student s;
    printf("Name: ");
    scanf("%s", s.name);
    printf("DNote: ");
    scanf("%d", &s.DNote);
    printf("ENote: ");
    scanf("%d", &s.ENote);
    printf("MNote: ");
    scanf("%d", &s.NNote);
    return s;
}

struct student erfolgsermittelung(struct student s) {
    double average = (double)(s.DNote + s.ENote + s.NNote) / 3;

    if (s.DNote == 5 || s.NNote == 5 || s.ENote == 5) {
        strcpy(s.erfolg, "Nicht Bestanden");
    }
    else if (s.DNote == 4 || s.NNote == 4 || s.ENote == 4 || average > 2) {
        strcpy(s.erfolg, "Bestanden");
    }
    else if (average > 1.5) {
        strcpy(s.erfolg, "mit gutem Erfolg");
    }
    else {
        strcpy(s.erfolg, "mit ausgezeichnetem Erfolg");
    }

    return s;
}

void ausgabe(struct student s) {
    printf("Name: %s DNote: %d ENote: %d MNote: %d Erfolg: %s\n",
        s.name, s.DNote, s.ENote, s.NNote, s.erfolg);
}

/********************* einfache Lösung für nur einen Schüler *************
int main(int argc, char const *argv[]) {
    struct student s;
    s = eingabe();
    s = erfolgsermittelung(s);
    ausgabe(s);
    return 0;
}
*/

/********************* Lösung für mehrere Schüler *******************/
int main(int argc, char const* argv[]) {
    int i = 0;
    int count = 0;

    printf("Anzahl der Schüler: ");
    scanf("%d", &count);

    struct student s[count]; // VLA – C99 erforderlich

    for (i = 0; i < count; i++) {
        printf("\n-- Schüler %d --\n", i + 1);
        s[i] = eingabe();
        s[i] = erfolgsermittelung(s[i]);
    }

    printf("\n--- Zeugnisse ---\n");
    for (i = 0; i < count; i++) {
        ausgabe(s[i]);
    }

    return 0;
}


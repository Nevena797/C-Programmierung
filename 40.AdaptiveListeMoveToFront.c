//Adaptive Liste MoveToFront(doppelt verkette Liste)

//Funktionen:

//Am Anfang einfügen;

//Element löschen;

//Ausgabe der Liste;

//Suchen mit  MoveToFront;

/*Program for adaptive List "MoveToFront" implementation through linked list) */

#include <stdio.h>
#include <stdlib.h> 

struct node {
    struct node* next;
    struct node* vor;
    int nr;
    int zugriffe; 
    int data;
};

struct node* anfang = NULL;
struct node* ende = NULL;

void einfuegen_sortiert(int number, int betrag) {
    struct node* ptr;
    struct node* help;
    ptr = (struct node*)malloc(sizeof(struct node));
    ptr->nr = number;
    ptr->zugriffe = 0;
    ptr->data = betrag;
    ptr->next = NULL;
    ptr->vor = NULL;

    if (anfang == NULL) {
        anfang = ptr;
        ende = ptr;
    }
    else if (anfang->nr >= number) {
        ptr->next = anfang;
        anfang->vor = ptr;
        anfang = ptr;
    }
    else if (ende->nr <= number) {
        ptr->vor = ende;
        ende->next = ptr;
        ende = ptr;
    }
    else {
        help = anfang;
        while (help->nr < number) {
            help = help->next;
        }
        ptr->vor = help->vor;
        ptr->next = help;
        help->vor->next = ptr;
        help->vor = ptr;
    }
}

void einfuegen_amAnfang(int number, int betrag) {
    struct node* ptr;
    ptr = (struct node*)malloc(sizeof(struct node));
    ptr->nr = number;
    ptr->zugriffe = 0;
    ptr->data = betrag;
    ptr->next = NULL;
    ptr->vor = NULL;

    if (anfang == NULL) {
        anfang = ptr;
        ende = ptr;
    }
    else {
        ptr->next = anfang;
        anfang->vor = ptr;
        anfang = ptr;
    }
}

void loesche_Element(struct node* temp) {
    if (temp == NULL) return;

    if (temp == anfang && temp == ende) {
        anfang = ende = NULL;
    }
    else if (temp == anfang) {
        anfang = temp->next;
        anfang->vor = NULL;
    }
    else if (temp == ende) {
        ende = temp->vor;
        ende->next = NULL;
    }
    else {
        temp->vor->next = temp->next;
        temp->next->vor = temp->vor;
    }
    free(temp);
}

void moveToFront(struct node* temp) {
    if (temp == NULL) return;
    einfuegen_amAnfang(temp->nr, temp->data);
    loesche_Element(temp);
}

int lineares_suchen(int number) {
    struct node* temp = anfang;
    int wert;

    while (temp != NULL) {
        if (temp->nr == number) {
            printf("\nDie Nummer: %4d wurde gefunden und hat den Wert: %d\n", temp->nr, temp->data);
            wert = temp->data;
            moveToFront(temp);
            return wert;
        }
        temp = temp->next;
    }

    printf("\nDie Nummer: %4d wurde NICHT gefunden! \n", number);
    return 0;
}

void display() {
    struct node* temp = anfang;
    while (temp != NULL) {
        printf("Nummer: %4d Wert: %d\n", temp->nr, temp->data);
        temp = temp->next;
    }
}

void liste_loeschen() {
    struct node* temp = anfang;
    struct node* help;

    while (temp != NULL) {
        help = temp;
        temp = temp->next;
        free(help);
    }

    anfang = NULL;
    ende = NULL;
}

int liste_empty() {
    return (anfang == NULL);
}

int main() {
    int num = 0;
    int wert;
    int i;
    anfang = ende = NULL;

    printf("Test-Programm: adaptive Liste\n\n");

    for (i = 90; i >= 10; i -= 10) {
        einfuegen_amAnfang(i, i * 1000);
    }

    printf("\nDie Liste beinhaltet folgende Elemente:\n");
    display();

    wert = lineares_suchen(40);
    display(); getchar();

    wert = lineares_suchen(50);
    display(); getchar();

    wert = lineares_suchen(52);
    display(); getchar();

    wert = lineares_suchen(30);
    display(); getchar();

    wert = lineares_suchen(30);
    display(); getchar();

    wert = lineares_suchen(90);
    display(); getchar();

    wert = lineares_suchen(80);
    display(); getchar();

    return 0;
}

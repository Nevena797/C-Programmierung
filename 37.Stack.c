// Stacks mittels verketteter Liste   LIFO (Last-In-First-Out) - Prinzip

// Funktionen:
//
// 1) void push(int zahl);         Wert auf dem Stack ablegen
// 2) int pop();                   Wert vom Stack entnehmen
// 3) int top();                   oberste Zahl anzeigen (Wenn die Liste leer ist, dann -1 zurückgeben!)
// 4) void display();              alle Werte ausgeben
// 5) int stack_empty();           Rückgabewert: 0 => Stack ist nicht leer; 1 => Stack ist leer
// 6) void clear_stack();          Den gesamten Stack löschen

#include <stdio.h>
#include <stdlib.h>

// Strukturdaten für verkettete Liste
struct node {
    int data;
    struct node* next;
};

struct node* front = NULL; // Stack-Anfang

// Element auf den Stack legen
void push(int y) {
    struct node* x = (struct node*)malloc(sizeof(struct node));
    if (x == NULL) {
        printf("Fehler beim Speicher reservieren!\n");
        exit(1);
    }
    x->data = y;
    x->next = front;
    front = x;
}

// Stack-Inhalt anzeigen
void display() {
    struct node* temp = front;
    if (temp == NULL) {
        printf("STACK ist leer\n");
        return;
    }
    while (temp != NULL) {
        printf("Wert: %d\n", temp->data);
        temp = temp->next;
    }
}

// Stack leeren
void clear_stack() {
    struct node* temp;
    struct node* help;
    temp = front;

    while (temp != NULL) {
        help = temp;
        temp = temp->next;
        free(help);
    }
    front = NULL;
}

// Prüfen ob Stack leer ist
int stack_empty() {
    return front == NULL;
}

// Element vom Stack entfernen
int pop() {
    int a;
    struct node* help;

    if (front == NULL) {
        printf("STACK EMPTY\n");
        return -1;
    }
    else {
        a = front->data;
        help = front;
        front = front->next;
        free(help);
        return a;
    }
}

// Oberstes Element anzeigen (ohne zu löschen)
int top() {
    if (front == NULL) {
        printf("STACK EMPTY\n");
        return -1;
    }
    else {
        return front->data;
    }
}

// ───────────── TESTCODE ─────────────

int main() {
    int num = 1;
    push(num);
    printf("push(): Wert %d wurde gespeichert\n", num);

    num = 3;
    push(num);
    printf("push(): Wert %d wurde gespeichert\n", num);

    num = 5;
    push(num);
    printf("push(): Wert %d wurde gespeichert\n", num);

    printf("\nDer Stack beinhaltet folgende Elemente:\n");
    display();

    printf("\npop(): Entferntes Element ist: %d\n", pop());

    printf("\ntop(): Der oberste Wert ist: %d\n", top());

    if (stack_empty()) {
        printf("\n\t\tSTACK EMPTY\t\t\n");
    }
    else {
        printf("\n\t\tSTACK NOT EMPTY\t\t\n");
    }

    clear_stack();
    printf("\nDer gesamte Stack wurde geleert.\n");

    if (stack_empty()) {
        printf("\n\t\tSTACK EMPTY\t\t\n");
    }
    else {
        printf("\n\t\tSTACK NOT EMPTY\t\t\n");
    }

    return 0;
}

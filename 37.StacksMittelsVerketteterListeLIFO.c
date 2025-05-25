#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

struct node* front = NULL;

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

void display() {
    struct node* temp = front;
    while (temp != NULL) {
        printf("Wert: %d\n", temp->data);
        temp = temp->next;
    }
}

void clear_stack() {
    struct node* temp = front;
    while (temp != NULL) {
        struct node* help = temp;
        temp = temp->next;
        free(help);
    }
    front = NULL;
}

int pop() {
    if (front == NULL) {
        printf("STACK EMPTY...\n");
        return -1;
    }

    int value = front->data;
    struct node* temp = front;
    front = front->next;
    free(temp);
    return value;
}

int stack_empty() {
    return front == NULL;
}

int main() {
    int num;

    printf("Testprogramm: Stack mittels verketteter Liste\n\n");

    num = 1;
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

    printf("\npop(): Die Funktion pop() liefert den Wert: %d\n", pop());

    printf("\nDer Stack beinhaltet folgende Elemente:\n");
    display();

    clear_stack();
    printf("\nDer gesamte Stack wurde geleert.\n");

    if (stack_empty()) {
        printf("\n\t\tSTACK EMPTY\t\t\n");
    } else {
        printf("\n\t\tSTACK NOT EMPTY\t\t\n");
    }

    return 0;
}

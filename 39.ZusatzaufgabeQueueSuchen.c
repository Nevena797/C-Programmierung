//BSP39b: Zusatzaufgabe Queue : Suchen

//Suchen Sie in einer Liste nach einem bestimmten Wert 
// und geben Sie die Position des Wertes in der Liste aus.

#include <stdio.h>
#include <stdlib.h>  


struct node {
    int data;
    struct node* next;
};


struct node* front = NULL;
struct node* end = NULL;


void EnQueue(int y) {
    struct node* help;
    help = (struct node*)malloc(sizeof(struct node));
    help->data = y;
    help->next = NULL;

    if (front == NULL) {
        front = help;
        end = help;
    }
    else {
        end->next = help;
        end = help;
    }
}


int DeQueue() {
    int num;
    struct node* help;

    if (front == NULL) {
        printf("QUEUE EMPTY\n");
        return 0;
    }
    else {
        num = front->data;
        help = front;
        front = front->next;
        free(help);
        return num;
    }
}

void display() {
    struct node* temp = front;

    while (temp != NULL) {
        printf("Wert: %d\n", temp->data);
        temp = temp->next;
    }
}


int top() {
    if (front == NULL) {
        printf("QUEUE EMPTY...\n");
        return -1;
    }
    else {
        return front->data;
    }
}


void queue_clear() {
    struct node* temp = front;
    struct node* help;

    while (temp != NULL) {
        help = temp;
        temp = temp->next;
        free(help);
    }

    front = NULL;
    end = NULL;
}


int queue_empty() {
    return (front == NULL) ? 1 : 0;
}


int search(int value) {
    struct node* temp = front;
    int position = 1;

    while (temp != NULL) {
        if (temp->data == value) {
            return position;
        }
        temp = temp->next;
        position++;
    }

    return -1; 
}

int main() {
    int num = 0;
    front = end = NULL;

    printf("Test-Programm: Queue mittels verketteter Liste\n\n");

    EnQueue(10);
    EnQueue(20);
    EnQueue(30);
    EnQueue(40);
    EnQueue(50);


    printf("\nDie Queue beinhaltet folgende Elemente:\n");
    display();


    int gesucht = 30;
    int pos = search(gesucht);

    if (pos != -1) {
        printf("\nWert %d wurde an Position %d gefunden.\n", gesucht, pos);
    }
    else {
        printf("\nWert %d wurde nicht in der Queue gefunden.\n", gesucht);
    }


    printf("\nTOP(): Der vorderste Wert ist: %d\n", top());

    printf("\nDEQUEUE(): Wert %d wurde entfernt.\n", DeQueue());

    printf("\nDie Queue nach DeQueue:\n");
    display();


    queue_clear();
    printf("\nDie gesamte Queue wurde geleert.\n");


    if (queue_empty()) {
        printf("\nQUEUE IST LEER\n");
    }
    else {
        printf("\nQUEUE IST NICHT LEER\n");
    }

    return 0;
}

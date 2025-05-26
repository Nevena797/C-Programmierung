//Queue mittels verketteter Liste - FIFO(First - in - First - out) - Prinzip

//1) void enQueue(int zahl);

//2) int deQueue();

//3) display();

//4) int top();

//5) int queueEmpty();

//6) clearQueue();

/*Program for queue implementation through nexted listint num=) */

/* Program for queue implementation through linked list */
#include <stdio.h>
#include <stdlib.h> // използвай <stdlib.h> вместо <malloc.h>

struct node {
    int data;
    struct node* next;
};

struct node* front = NULL;
struct node* end = NULL;

// Добавяне в опашката
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

// Премахване от опашката
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

// Извеждане на всички елементи
void display() {
    struct node* temp = front;
    while (temp != NULL) {
        printf("Wert: %d\n", temp->data);
        temp = temp->next;
    }
}

// Връща най-горния елемент (без да го маха)
int top() {
    if (front == NULL) {
        printf("QUEUE EMPTY...\n");
        return -1;
    }
    else {
        return front->data;
    }
}

// Изчистване на опашката
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

// Проверка дали е празна
int queue_empty() {
    return (front == NULL) ? 1 : 0;
}

// Главна функция
int main() {
    int num = 0;
    front = end = NULL;

    printf("Test-Programm: Queue mittels verketteter Liste\n\n");

    num = 1;
    EnQueue(num);
    printf("EnQueue(): Wert %d wurde gespeichert\n", num);

    num = 3;
    EnQueue(num);
    printf("EnQueue(): Wert %d wurde gespeichert\n", num);

    num = 5;
    EnQueue(num);
    printf("EnQueue(): Wert %d wurde gespeichert\n", num);

    printf("\nDie Queue beinhaltet folgende Elemente:\n");
    display();

    printf("\ntop(): Die Funktion TOP() liefert den Wert: %d\n", top());

    printf("\nDie Queue beinhaltet folgende Elemente:\n");
    display();

    printf("\nDeQueue(): Die Funktion DeQueue() liefert den Wert: %d\n", DeQueue());

    printf("\nDie Queue beinhaltet folgende Elemente:\n");
    display();

    num = 7;
    EnQueue(num);
    printf("EnQueue(): Wert %d wurde gespeichert\n", num);

    printf("\nDie Queue beinhaltet folgende Elemente:\n");
    display();

    queue_clear();
    printf("Die gesamte Queue wurde geleert\n");

    if (queue_empty()) {
        printf("\nQUEUE EMPTY\n");
    }
    else {
        printf("\nQUEUE not EMPTY\n");
    }

    return 0;
}

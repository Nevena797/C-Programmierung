#include <stdio.h>
#include <stdlib.h>

void vertausche(int* x, int* y)      // Funktion bekommt die Adressen der 
{                                    // zu vertauschenden Variablen

    int hilf;

    hilf = *x;                         // Inhalt von x auf Hilfsvariable zuweisen 
    *x = *y;                           // Inhalt von y auf Inhalt von x zuweisen
    *y = hilf;                         // Hilfsvariable auf Inhalt von y zuweisen

};

int main(int argc, char* argv[]) {


    int a = 3;
    int b = 5;
    printf("a=%d   b=%d", a, b);

    vertausche(&a, &b);    // Übergeben der Adressen (call by reference)) !!!

    printf("a=%d   b=%d", a, b);



    return (EXIT_SUCCESS);
}

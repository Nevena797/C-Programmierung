/******************************************************************************

Binäres Suchen

*******************************************************************************/
#include <stdio.h>

int main()
{
    int links, rechts, mitte = 0;
    int position = -1;
    int i;
    int zahlen[100];
    int schluessel;
    int anzahl = 0;

    links = 0;
    rechts = 100;

    printf("Bitte geben Sie den Suchwert ein: ");
    scanf("%d", &schluessel);

    for (i = 0; i < 100;i++)
    {
        zahlen[i] = i * 2;
    }

    do
    {
        mitte = (links + rechts) / 2;

        anzahl++;


        if (zahlen[mitte] > schluessel)
        {
            rechts = mitte - 1;
        }
        if (zahlen[mitte] < schluessel)
        {
            links = mitte + 1;
        }

    } while ((zahlen[mitte] != schluessel) && (links <= rechts));


    if (zahlen[mitte] == schluessel) printf("Der Wert befindet sich an der Positio %d\n", mitte);
    else printf("Der Wert wurde nicht gefunden!\n");
    printf("Es wurden %d Schritte dafür benötigt\n", anzahl);


    return 0;
}
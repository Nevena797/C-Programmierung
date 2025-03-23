/* TINF 2 - Programmieren C
BSP07: Balkendiagramm
 Eingabe:Länge des Balkens (Anzahl des "="-Zeichens)
 Mittels while-Scheife sollen solange Werte eingelesen und ein Balken
 gezeichnet werden, bis der Wert 0 eingegeben wird.
Ausgabe: Balken:
 z.B: 8: ========
 3: ===
 6: ======
 0: (Ende)
*/

#include <stdio.h>
int main(void)
{
	int index;
	int laenge;
	int i;
	printf("Eingabe: Länge des Balkens (0 Exit): ");
	scanf("%d", &laenge);
	while (laenge != 0)
	{
		printf("%d: ", laenge);
		for (i = 0; i < laenge; i++)
		{
			printf("=");
		}
		printf("\n");
		printf("Eingabe: Länge des Balkens (0 Exit): ");
		scanf("%d", &laenge);
	}
}

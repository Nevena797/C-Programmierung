/* *******  einfachverkettete Liste mit Datenkapselung:
am Anfang einfoegen und loeschen
   folgende Funktionen sollen noch implementiert werden:
1) Loeschen am Anfang
2) Einfuegen am Anfang
3) Suchen nach einem Wert; wenn er vorhanden ist
, so ist der Rueckgabe-Wert 
die Position des Elementes in der Liste (nicht vorhanden=>-1).
4) Die einzelnen Werte in einer Liste aufsummieren
*/

#include<stdio.h>
#include<stdlib.h>

struct element {
	int daten;
	struct element* next;
};

struct element* anfang = NULL;

//*************************** printList *****************************************
void printlist()
{
	struct element* help;
	printf("\n");
	help = anfang;
	if (anfang == NULL)
	{
		printf("Liste ist leer\n");
	}
	else
	{
		while (help != NULL)
		{
			printf("Inhalt %d\n", help->daten);
			help = help->next;
		}
	}
}
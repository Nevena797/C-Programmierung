//*******  einfachverkettete Liste mit Datenkapselung: am Anfang einfuegen und loeschen
//   folgende Funktionen sollen noch implementiert werden:
//1) Loeschen am Anfang
//2) Einf�gen am Anfang
//3) Suchen nach einem Wert; wenn er vorhanden ist, 
//so ist der Rueckgabe-Wert die Position des Elementes in der Liste (nicht vorhanden=>-1).
//4) Die einzelnen Werte in einer Liste aufsummieren

#include<stdio.h>
#include<stdlib.h>

struct element{
	int daten;
	struct element* next;
};

struct element* anfang = NULL;

//*************************** printList *****************************************
void printlist()
{
	struct element *help;
	printf("\n");
	help = anfang;
	if (anfang == NULL)
	{
		printf("Liste is leer\n");
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
//************************ insert (Einfuegen am Anfang *******************************************

void insert(int wert)
{
	struct element* neuesElement;
	struct element* help;
	help = anfang;

	//neues element erzeugen
	neuesElement = (struct element*)malloc(sizeof(struct element));

	//neues element ausfühlen
	neuesElement->daten = wert;
	//neuesElement->next=NULL;

	//neues element in die Liste anhängen
	neuesElement->next = anfang;
	anfang = neuesElement;
}

//************************ deleteFront (Loeschen am Anfang) *************************


void deleteFront()
{
	struct element* help;
	help = anfang;

	if (help != NULL) //nicht leere liste
	{
		anfang = help->next;
		free(help); //letzte element frei geben
	}
}

//************************ Position eines Elementes *************************

int search(int wert)
{
	struct element* help;
	int position = -1;
	int i = 1;

	help = anfang;
	if (anfang == NULL)
	{
		printf("Liste ist leer\n");
	}
	else
	{
		while (help != NULL)
		{
			if (help->daten == wert)
			{
				position = i;
			}
			help = help->next;
			i++;
		}
	}
	return position;
}

//*************************** Summe *****************************************

int summe()
{
	struct element* help;
	int summe = 0;

	help = anfang;
	if (anfang == NULL)
	{
		printf("Liste ist leer\n");
	}
	else
	{
		while (help != NULL)
		{
			summe = summe + help->daten;
			help = help->next;
		}
	}
	return summe;
}

//************************ main ********************************************

int main()
{
	int pos = 0;
	int wert;
	int sum = 0;

	printlist();
	insert(5);
	insert(17);
	insert(23);
	printlist();

	sum = summe();
	printf("\nDie Summe der Listenwerte lautet:%d \n\n", sum);

	wert = 23;
	pos = search(wert);
	if (pos == -1) printf("Der wert %d ist nicht vorhandeln\n", wert);
	else printf("Der Wert %d ist auf der Position %d vorhsndeln.\n\n", wert, pos);

	printf("Das erste element wird geschaltet\n");
	deleteFront();
	printlist();

	printf("Das erste element wird geschaltet\n");
	deleteFront();
	printlist();

	printf("Das erste element wird geschaltet\n");
	deleteFront();
	printlist();

	getchar();
	return 0;
}
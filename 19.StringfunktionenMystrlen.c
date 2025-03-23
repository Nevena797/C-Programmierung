/* strlen.c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int mystrlen(char zeile[])
{
	int i = 0;
	for (i = 0; i < 80 && zeile[i] != '\0';i++) {};
	return i;

}

int main(void) {
	char string[] = "Das ist ein Teststring";
	int laenge;

	laenge = strlen(string);
	printf("Der String \"%s\" hat %d Zeichen\n", string, laenge);

	laenge = mystrlen(string);
	printf("Der myString \"%s\" hat %d Zeichen\n", string, laenge);

	return 0;



}
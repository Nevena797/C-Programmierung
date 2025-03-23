/* stringcopy.c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mystrcpy(char s1[], char s2[])
{
	int i = 0, pos;
	pos = strlen(s2);

	for (i = 0; i <= strlen(s2);i++)  //Stringende '\0' mitkopieren
	{
		s1[i] = s2[i];
	}
	return 0;
}


int main(void) {
	char quelle[80] = "Dieser Text wurde kopiert ";
	char kopie[80];

	strcpy(kopie, quelle);
	printf("Ergebnis strcpy:   %s\n", kopie);

	mystrcpy(kopie, quelle);
	printf("Ergebnis mystrcpy: %s\n", kopie);

	return 0;
}

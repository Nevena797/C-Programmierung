#include <stdio.h> 
int main()
{
	int l, b, h, gf, m, of, v;

	printf("L�nge eingeben: ");
	scanf("%d", &l);

	printf("Breite eingeben: ");
	scanf("%d", &b);

	printf("H�he eingeben: ");
	scanf("%d", &h);

	gf = l * b;
	m = 2 * l * h + 2 * b * h;
	of = 2 * (l * h + b * h + l * b);
	v = l * b * h;

	printf("Die Grundfl�che ist %d\n", gf);
	printf("Der Mantel ist %d\n", m);
	printf("Die Oberfl�che ist %d\n", of);
	printf("Das Volumen ist %d\n", v);



}

#include <stdio.h>

int main() {
    int l, b, h, gf, m, of, v;

    printf("L�nge eingeben: ");
    scanf("%d", &l);

    printf("Breite eingeben: ");
    scanf("%d", &b);

    printf("H�he eingeben: ");
    scanf("%d", &h);

    // Berechnungen
    gf = l * b; // Grundfl�che
    m = 2 * l * h + 2 * b * h; // Mantelfl�che
    of = 2 * (l * h + b * h + l * b); // Oberfl�che
    v = l * b * h; // Volumen

    // Ausgabe der Ergebnisse
    printf("Die Grundfl�che ist %d\n", gf);
    printf("Der Mantel ist %d\n", m);
    printf("Die Oberfl�che ist %d\n", of);
    printf("Das Volumen ist %d\n", v);

    return 0;
}

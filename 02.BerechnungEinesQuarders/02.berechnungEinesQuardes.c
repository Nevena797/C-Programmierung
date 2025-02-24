#include <stdio.h> 
int main()
{
	int l, b, h, gf, m, of, v;

	printf("Länge eingeben: ");
	scanf("%d", &l);

	printf("Breite eingeben: ");
	scanf("%d", &b);

	printf("Höhe eingeben: ");
	scanf("%d", &h);

	gf = l * b;
	m = 2 * l * h + 2 * b * h;
	of = 2 * (l * h + b * h + l * b);
	v = l * b * h;

	printf("Die Grundfläche ist %d\n", gf);
	printf("Der Mantel ist %d\n", m);
	printf("Die Oberfläche ist %d\n", of);
	printf("Das Volumen ist %d\n", v);



}

#include <stdio.h>

int main() {
    int l, b, h, gf, m, of, v;

    printf("Länge eingeben: ");
    scanf("%d", &l);

    printf("Breite eingeben: ");
    scanf("%d", &b);

    printf("Höhe eingeben: ");
    scanf("%d", &h);

    // Berechnungen
    gf = l * b; // Grundfläche
    m = 2 * l * h + 2 * b * h; // Mantelfläche
    of = 2 * (l * h + b * h + l * b); // Oberfläche
    v = l * b * h; // Volumen

    // Ausgabe der Ergebnisse
    printf("Die Grundfläche ist %d\n", gf);
    printf("Der Mantel ist %d\n", m);
    printf("Die Oberfläche ist %d\n", of);
    printf("Das Volumen ist %d\n", v);

    return 0;
}

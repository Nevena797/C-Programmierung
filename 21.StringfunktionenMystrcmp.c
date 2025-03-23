/* strcmp.c */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mystrcmp(char s1[], char s2[])
{
    int i, laenge;
    for (i = 0; i <= strlen(s1) && i <= strlen(s2);i++)
    {
        if (s1[i] != s2[i])
            return s1[i] - s2[i];
    }

    return 0;
}

void String_Vergleich(char s1[], char s2[]) {
    int ret;
    ret = mystrcmp(s1, s2);
    //   ret = strcmp (s1, s2);  //zum Testen von strcmp()

    if (ret == 0)
        printf("%s == %s\n", s1, s2);
    else
        if (ret < 0)
            printf("%s < %s\n", s1, s2);
        else
            printf("%s > %s\n", s1, s2);
}

int main(void) {
    char str1[] = "aaa";
    char str2[] = "aab";
    char str3[] = "abb";

    String_Vergleich(str1, str2);
    String_Vergleich(str1, str3);
    String_Vergleich(str3, str2);
    String_Vergleich(str1, str1);

    return EXIT_SUCCESS;
}

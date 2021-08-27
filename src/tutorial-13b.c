#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void strings_vergleichen(char s1[], char s2[])
{
    int ret = strcmp(s1, s2);

    if (ret == 0)
        printf("%s == %s\n", s1, s2);
    else
        printf("Die beiden Strings sind nicht gleich\n");
}

int main()
{
    char s1[] = "aaa";
    char s2[] = "aab";
    char s3[] = "bba";

    strings_vergleichen(s1, s2);
    strings_vergleichen(s1, s3);
    strings_vergleichen(s3, s2);
    strings_vergleichen(s1, s1);

    return EXIT_SUCCESS;
}

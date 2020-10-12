#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[])
{
    char test_string[] = "toto";

    printf("chaine: %s\n", test_string);

    printf("la chaine a une longueur de %ld caractères\n", strlen(test_string));
    return 0;
}


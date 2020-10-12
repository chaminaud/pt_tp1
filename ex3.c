#include <stdio.h>
#include <stdlib.h>

char *get_first_arg(int argc, char *argv[])
{
    if (argc <2)
    {
        printf("no argument\n\n");
        exit(0);
    }
    return (argv[1]);
}

void print_arg(int argc, char *argv[])
{
    printf("nombre d'argument %d\n", argc);

    for (int i=0; i < argc; i++)
        printf("[%d] : \"%s\" \n", i, argv[i]);
}

int main(int argc, char *argv[])
{
    print_arg(argc, argv);
    char *arg = get_first_arg(argc, argv);

    printf("chaine: %s\n", arg);

    return 0;
}


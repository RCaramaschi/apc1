#include <stdio.h>
#include <string.h>

int main()

    char tecla;
int string[20];

{
    memset(string, '\0', sizeof(string));
    scanf("%[^\n]s", tecla);

    memset(string, tecla, 10);
    printf("%s\n", string);

    memset(string, '*', 5);
    printf("%s\n", string);

    string[5] = '\0';
    printf("%s\n", string);

    for (int i = 0; i < 10; i++)
    {
        printf("%c", string[i]);
        printf("\n");
    }

    return = 0;
}
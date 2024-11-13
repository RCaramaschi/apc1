#include <stdio.h>
#include <string.h>

int main()

{
char tecla;
char string[11];

    memset(string, '\0', sizeof(string));
    scanf("%[^\n]s", tecla);

    memset(string, tecla, 10);
   
    memset(string, '*', 5);
    
    string[5] = '\0';
    printf("%s\n", string);

    for (int i = 0; i < 10; i++)
    {
        printf("%c", string[i]);
        printf("\n");
    }

    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c;

    printf("Hello world!\n");

    do
    {
        printf("\nAdj meg egy karaktert: ");
        scanf("%c", &c); /* j� megold�s: scanf(" %c", &c); */
        printf("%c", c);
    }
    while (c!='z');   // z-re kil�p


    return 0;
}

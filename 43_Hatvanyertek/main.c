#include <stdio.h>
#include <stdlib.h>

int main()
{
    //a>0, b>=0, a^b
    int hatvany_alap, hatvany_kitevo, ciklusvaltozo;
    long int eredmeny = 1;

    printf("\nKerem a hatvany alapot es a kitevot vesszovel elvalasztva!\n");
    printf("alap, kitevo:");
    scanf("%d, %d", &hatvany_alap, &hatvany_kitevo);

    for(ciklusvaltozo = 0; ciklusvaltozo < hatvany_kitevo;
                                            ciklusvaltozo++)
    {
        eredmeny *= hatvany_alap;
    }
    printf("%d %d. hatvanya: %ld\n", hatvany_alap,
                            hatvany_kitevo,
                            eredmeny);
    return 0;
}

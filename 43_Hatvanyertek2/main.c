#include <stdio.h>
#include <stdlib.h>

int main()
{
    //a>0, b>=0, a^b
    int hatvany_alap, hatvany_kitevo, ciklusvaltozo;
    long int eredmeny = 1;

    char karakter;
    int jo = 0;

    do
    {
        printf("\nKerem a hatvany alapot es a kitevot vesszovel elvalasztva!\n");
        printf("alap, kitevo:");

        if (scanf("%d,%d", &hatvany_alap, &hatvany_kitevo) != 2)
        {
            printf("Hibas adatok!\n");
        }
        else
        {
                if (hatvany_alap <= 0 || hatvany_kitevo < 0)
                {
                        printf("\nAz alap pozitiv, a kitevo pozitiv egesz szam vagy 0 legyen.\n");
                }
                else
                {
                        jo = 1;
                }
        }
        while ((karakter = getchar()) != '\n');
    } while (!jo);

    for(ciklusvaltozo = 0; ciklusvaltozo < hatvany_kitevo;
                                            ciklusvaltozo++)
    {
        eredmeny *= hatvany_alap;
    }
    printf("%d %d hatvanya: %ld\n", hatvany_alap,
                            hatvany_kitevo,
                            eredmeny);
    return 0;
}

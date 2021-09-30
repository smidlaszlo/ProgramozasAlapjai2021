#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Eldönteni egy megadott évszámról, hogy szökõév-e.
    Szökõév minden negyedik év, de a századik nem.
    Ugyanakkor minden négyszázadik év szökõév.
    Például: 2000, 2004 szökõévek, de 1900 nem az.
    */


    printf("Hello world!\n");

    if ( ((year % 4 == 0) && (year % 100 !=0)) || (year % 400==0) )
        printf("Szökõév \n");
    else
        printf("Nem szökõév \n");


    Ellenõrzött módon olvasson be egy idõintervallumot (2 évszámot)
    és számolja meg, hány szökõév volt az adott idõszakban.

// intervallum ellenõrzött beolvasása
    do
    {
        ok = 1;						 // az alsó határ >= 1000 legyen
        printf("Add meg az intervallum alsó határát: ");
        if (scanf("%d", &lower)!=1 ||  lower<1000)
        {
            printf("Hibás input\n");
            ok = 0;
        }
        while (getchar()!='\n') ;		// input buffer ürítése
    }
    while (!ok);

    do   						// felsõhatár > alsóhatár és felsõhatár <= 2019
    {
        ok = 1;
        printf("Add meg az intervallum felsõ határát: ");
        if (scanf("%d", &upper)!=1 || upper<lower || upper > 2019)
        {
            printf("Hibás input\n");
            ok = 0;
        }
        while (getchar()!='\n') ;		// input buffer ürítése
    }
    while (!ok);





    return 0;
}

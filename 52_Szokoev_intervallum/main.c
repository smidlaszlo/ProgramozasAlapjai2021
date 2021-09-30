#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    Eld�nteni egy megadott �vsz�mr�l, hogy sz�k��v-e.
    Sz�k��v minden negyedik �v, de a sz�zadik nem.
    Ugyanakkor minden n�gysz�zadik �v sz�k��v.
    P�ld�ul: 2000, 2004 sz�k��vek, de 1900 nem az.
    */


    printf("Hello world!\n");

    if ( ((year % 4 == 0) && (year % 100 !=0)) || (year % 400==0) )
        printf("Sz�k��v \n");
    else
        printf("Nem sz�k��v \n");


    Ellen�rz�tt m�don olvasson be egy id�intervallumot (2 �vsz�mot)
    �s sz�molja meg, h�ny sz�k��v volt az adott id�szakban.

// intervallum ellen�rz�tt beolvas�sa
    do
    {
        ok = 1;						 // az als� hat�r >= 1000 legyen
        printf("Add meg az intervallum als� hat�r�t: ");
        if (scanf("%d", &lower)!=1 ||  lower<1000)
        {
            printf("Hib�s input\n");
            ok = 0;
        }
        while (getchar()!='\n') ;		// input buffer �r�t�se
    }
    while (!ok);

    do   						// fels�hat�r > als�hat�r �s fels�hat�r <= 2019
    {
        ok = 1;
        printf("Add meg az intervallum fels� hat�r�t: ");
        if (scanf("%d", &upper)!=1 || upper<lower || upper > 2019)
        {
            printf("Hib�s input\n");
            ok = 0;
        }
        while (getchar()!='\n') ;		// input buffer �r�t�se
    }
    while (!ok);





    return 0;
}

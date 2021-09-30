#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ciklusvaltozo, N, osszeg;
    int szam, oszto, darabszam;

    //1-tol N-ig a pozitiv egesz szamok osszegzese
    printf("Kerem adjon meg egy pozitiv egesz szamot!\nN=");
    scanf("%d", &N);

    //eloltesztelo ciklus
    osszeg = 0;
    ciklusvaltozo = 1;

    while (ciklusvaltozo <= N)
    {
        osszeg += ciklusvaltozo;
        ciklusvaltozo++;
    }

    printf("\nOsszeg: %d\n", osszeg);

    //hatultesztelo ciklus
    //1. verzio
    osszeg = 0;
    ciklusvaltozo = 1;
    do
    {
        osszeg += ciklusvaltozo;
        ciklusvaltozo++;
    } while (ciklusvaltozo <= N);

    printf("\nOsszeg: %d\n", osszeg);

    //2. verzio
    osszeg = 0;
    do
    {
        osszeg += N;
        N--;
    } while (N > 0);

    printf("\nOsszeg: %d\n", osszeg);

    //eloltesztelo ciklussal a szam osztoinak megszamlalasa
    printf("Kerem adjon meg egy pozitiv egesz szamot!\nszam=");
    scanf("%d", &szam);

    //while ciklussal
    oszto = 1;
    darabszam = 0;

    while (oszto <= szam)
    {
        //if (szam % oszto == 0)
        if (!(szam % oszto))
            darabszam++;

        oszto++;
    }

    printf("\nOsztok szama: %d\n", darabszam);

    //for ciklussal
    for(oszto = 1, darabszam = 0; oszto <= szam; oszto++)
    {
        if (szam % oszto == 0)
            darabszam++;
    }

    printf("\nOsztok szama: %d\n", darabszam);
    return 0;
}

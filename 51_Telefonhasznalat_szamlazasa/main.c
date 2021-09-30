#include <stdio.h>
#include <stdlib.h>

/*
P�lda t�bbir�ny� el�gaz�sra
�rjon telefonhaszn�lati d�jak sz�ml�z�s�ra alkalmas programot. �sszes�tse N db h�v�s ut�n a telefonhaszn�lati d�jakat h�v�s t�pusonk�nt (1-k�lf�ldi, 2-h�l�zaton k�v�li, 3-h�l�zaton bel�li). A h�v�si id�t percben adja meg a felhaszn�l�. D�jszab�s: k�lf�ldi h�v�s 100 Ft/perc, h�l�zaton k�v�li h�v�s 60 Ft/perc, h�l�zaton bel�li h�v�s 40 Ft/perc.
*/

int main()
{
    int N, i, tipus;
    //szumma_kulfoldi
    //szumma_halozaton_kivuli
    //szumma_halozaton_beluli
    double ido, sum_kf, sum_hk, sum_hb;

    enum tip
    {
        KULFOLDI = 1,
        HALOZATON_KIVULI,
        HALOZATON_BELULI
    };

    sum_kf = sum_hk = sum_hb = 0;

    printf("Hany adat lesz? ");
    scanf("%d", &N);

    i = 1;

    while (i <= N)
    {
        printf("%d. hivas adatai: \n", i);
        printf("Tipus [1-kulfoldi, 2-halozaton kivuli, 3-halozaton beluli]: ");
        scanf("%d", &tipus);
        printf("Beszelgetes ideje (percben): ");
        scanf("%lf", &ido);

        /*Tobbiranyu elagazas: egymasba agyazott if utasitasok */
/*
        if (1 == tipus)
            sum_kf = sum_kf + (ido*100); //100 Ft/perc
        else
        {
            if (2 == tipus)
                sum_hk = sum_hk + (ido*60); //60 Ft/perc
            else
            {
                if (3 == tipus)
                    sum_hb = sum_hb + (ido*40); //40 Ft/perc
                else
                    printf("Nem defini�lt tipus!");
            }
        }
*/
        /*Tobbbiranyu elagazas: if...else if szerkezet */
/*
        if (1 == tipus)
        {
            sum_kf = sum_kf + (ido*100); //100 Ft/perc
        }
        else if (2 == tipus)
        {
            sum_hk = sum_hk + (ido*60); //60 Ft/perc
        }
        else if (3 == tipus)
        {
            sum_hb = sum_hb + (ido*40); //40 Ft/perc
        }
        else
            printf("Nem definialt tipus!");
*/
        /* Tobbiranyu elagazas: switch utasitas */
/*
        switch (tipus)
        {
            case 1:
                    sum_kf = sum_kf + (ido*100);
                    break;

            case 2:
                    sum_hk = sum_hk + (ido*60);
                    break;

            case 3:
                    sum_hb = sum_hb + (ido*40);
                    break;

            default:
                    printf("Nem definialt tipus!");
        }
*/
        /* enumeracios (felsorolt tipusu) konstans hasznalataval */

        switch (tipus)
        {
                case KULFOLDI:
                        sum_kf = sum_kf + (ido * 100);
                        break;

                case HALOZATON_KIVULI:
                        sum_hk = sum_hk + (ido * 60);
                        break;

                case HALOZATON_BELULI:
                        sum_hb = sum_hb + (ido * 40);
                        break;

                default:
                        printf("Nem definialt tipus!");
        }//switch

        i++;
    }//while

    printf("\nA szamla vegoszege: %.2lf (1) + %.2lf (2) + %.2lf (3) = %.2lf Ft\n",
           sum_kf, sum_hk, sum_hb, sum_kf + sum_hk + sum_hb);

    return 0;
}

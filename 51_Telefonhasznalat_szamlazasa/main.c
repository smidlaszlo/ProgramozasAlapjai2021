#include <stdio.h>
#include <stdlib.h>

/*
Példa többirányú elágazásra
Írjon telefonhasználati díjak számlázására alkalmas programot. Összesítse N db hívás után a telefonhasználati díjakat hívás típusonként (1-külföldi, 2-hálózaton kívüli, 3-hálózaton belüli). A hívási idõt percben adja meg a felhasználó. Díjszabás: külföldi hívás 100 Ft/perc, hálózaton kívüli hívás 60 Ft/perc, hálózaton belüli hívás 40 Ft/perc.
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
                    printf("Nem definiált tipus!");
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

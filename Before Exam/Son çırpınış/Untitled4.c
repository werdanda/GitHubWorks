#include <stdio.h>
#include <conio.h>

int main()
{
    int boyut;
    printf("Dizinin boyutunu giriniz : ");
    scanf("%d",&boyut);
    int dizi[boyut];

    int j=0,arttoplam=0;

    for(j=0; j<boyut; j++)
        {
            printf("%d. elemani giriniz : ",j+1);
            scanf("%d",&dizi[j]);
            arttoplam  = arttoplam + dizi[j];

        }
    printf("dizinin aritmetik ortalamasi %d dir.",(arttoplam)/(boyut));
}

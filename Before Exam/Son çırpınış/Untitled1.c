#include <stdio.h>
#include <conio.h>
//ba�larda toplam say� bu de�erleri 0 a e�itlemeyi unutma
int main()
{

    int sayi=1,deger,toplam=0;

    printf("Bir sayi giriniz : ");
    scanf("%d",&deger);

    for(sayi=1; sayi<=deger; sayi++)
        {
            toplam = sayi + toplam;
        }
        printf("%d",toplam);
}

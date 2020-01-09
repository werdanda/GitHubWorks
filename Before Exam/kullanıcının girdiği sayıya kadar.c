#include <stdio.h>
#include <conio.h>

int main()
{


int sayi=1,deger,toplam=0;

        printf("Bir sayi giriniz : ");
        scanf("%d",&deger);

for(sayi=1; sayi<=deger; sayi++)
    {
     toplam = toplam+sayi;
    }
    printf("sayilarin toplami %d dir",toplam);
}

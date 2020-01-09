#include <stdio.h>
#include <conio.h>

void topla (int sayi1)
{
int i,toplam=0;

for(i=0; i<=sayi1; i++)
    {
        toplam = toplam + i;
    }
    printf("%d",toplam);
}

int main()
{
    topla(50);
    printf("\n");
    topla(5);




}

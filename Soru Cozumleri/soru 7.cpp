
#include <stdio.h>
#include <conio.h>

int main (void)
{

float ikur,idolar,itl;

printf("Dolar Kurunu Giriniz : ");
scanf("%f",&ikur);
printf("Kac dolariniz var? : ");
scanf("%f",&idolar);

itl = idolar*ikur;

printf("%.2f TL niz var. ",itl);

}

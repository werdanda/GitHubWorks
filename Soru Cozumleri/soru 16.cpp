#include <stdio.h>
#include <conio.h>

int main (void)
{
int isayi1,isayac=0,i;

printf("Asal olup olmadigini kontrol etmek istediginiz sayiyi giriniz : ");
scanf("%d",&isayi1);

for(i=2; i<isayi1; i++)
{
if (isayi1%i==0)
  {
	isayac++;
  }
}
if (isayac==0)
{
	printf("Sayiniz asal bir sayidir.");
}
else
printf("Sayiniz asal sayi degildir.");

getch();
return 0;



}


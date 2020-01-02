#include <stdio.h>
#include <conio.h>

int main (void)
{

int isayi,i,icarpim=1;

printf("Faktoriyeli hesaplanacak sayiyi giriniz : ");
scanf("%d",&isayi);

for(i=1;i<=isayi;i++)
   {
   
	icarpim = i * icarpim;

 }
printf("Faktoriyelin sonucu %d dir.",icarpim);


getch();
return 0;

}

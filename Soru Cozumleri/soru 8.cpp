#include <stdio.h>
#include <conio.h>

int main (void)
{

float ialis,isatis,ikar,izarar;

printf("Alis fiyatini giriniz : ");
	scanf("%f",&ialis);
printf("Satis fiyatini giriniz :");
	scanf("%f",&isatis);

if (isatis> ialis)
{

ikar = isatis-ialis;
ikar = ikar / ialis;
ikar = ikar*100; 

printf("Yuzde %.2f kar ettiniz",ikar);

}

else if (ialis>isatis)
{
  
izarar = ialis-isatis;
izarar = izarar / ialis;
izarar = izarar*100;

printf("Yuzde %.2f zarar ettiniz.",izarar);  	
 }
  else if (isatis=ialis)
  printf("Ne kar ne de zarar edilmistir");
 

  getch();
  return 0;
  
}

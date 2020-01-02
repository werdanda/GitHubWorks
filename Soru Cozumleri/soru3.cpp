#include <stdio.h>
#include <conio.h>

int main (void)
{

	float ifiyat,isonuc;
	
	printf("Lutfen tutari giriniz: ");
	scanf("%f",&ifiyat);
	
	if (ifiyat>0 && ifiyat<100)
    {

	isonuc = ifiyat;
	
	}
	else if (ifiyat>100 && ifiyat<500)
	
	{

	isonuc = ifiyat*5 / 100; 
    isonuc = ifiyat-isonuc;
	
	}
   
   else if (ifiyat>500 && ifiyat<1000)
   
   {
   
   	isonuc = ifiyat*10 /100;
   	isonuc = ifiyat - isonuc;
  
   }
   else
  
   {
   	isonuc = ifiyat*15 /100;
   	isonuc = ifiyat-isonuc;
   }

printf("Tutar %.2f dir. ",isonuc);

getch();
return 0;


}




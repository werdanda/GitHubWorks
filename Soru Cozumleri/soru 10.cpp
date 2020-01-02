#include <stdio.h>
#include <conio.h>
#define yaz printf
#define degeral scanf
 
int main (void)
{
	float itutar;
	char grup;
	float odenentutar;
	
	yaz("Musteri grubunu yaziniz\n A musteri tipi\n B musteri tipi\n C musteri tipi\n Tip: ");
		degeral("%c",grup);
	
		
	yaz("Tutari yazinizi");
		degeral("%f",itutar);
		

// A grubu
// B grubu
// C grubu



	switch(grup)
	{
		case A :
		itutar < 100;	
		odenentutar = itutar*5;
		odenentutar = itutar/100;
		odenentutar = itutar - odenentutar;
		
		itutar > 100 && itutar <500;
		odenentutar = itutar*10;
		odenentutar = itutar/100;
		odenentutar = itutar - odenentutar;
		
		itutar>500;
		odenentutar = itutar*15;
		odenentutar = itutar/100;
		odenentutar = itutar - odenentutar;
		
		
		break;
		

		
		
		
	}
	
	
	
	
	
}

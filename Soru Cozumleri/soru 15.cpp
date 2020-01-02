#include <stdio.h>
#include <conio.h>

int main (void)
{
	int x,y,i;
	int sonuc=1;
	
	printf("X degerini giriniz : ");
	scanf("%d",&x);
	printf("Y degerini giriniz : ");
	scanf("%d",&y);
	
	for(i=0; i<y; i++)
	sonuc = x*sonuc;
	
	printf("Sonuc %d dir.",sonuc);
	getch();

	
	
}

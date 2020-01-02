#include <stdio.h>
#include <conio.h>

int main (void)
{
	int isayi;
	
	printf("1-12 arasi ay degerini giriniz : ");
	scanf("%d",&isayi);
	
	if(isayi>0 && isayi<3)
	printf("KIS");
	
	else if (isayi>2 && isayi<6)
	printf("ILK BAHAR");
	
	else if (isayi>5 && isayi<9)
	printf("YAZ");
	
	else if (isayi>8 && isayi<12)
	printf("SON BAHAR");
	
	else if (isayi==12)
	printf("KIS");
	
	getch();
	return 0;
	
	
	
}

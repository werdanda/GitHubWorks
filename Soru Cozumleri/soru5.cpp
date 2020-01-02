#include <stdio.h>
#include <conio.h>

int main (void)
{
	int isayi1,isayi2,isayi3;
	printf("Birinci sayiyi giriniz : ");
	scanf("%d",&isayi1);
	printf("Ikinci sayiyi giriniz : ");
	scanf("%d",&isayi2);
	printf("Ucuncu sayiyi giriniz : ");
	scanf("%d",&isayi3);
	
	if (isayi1>isayi2 && isayi1>isayi3)
	printf("%d",isayi1);
	
	else if (isayi2>isayi1 && isayi2>isayi3)
	printf("%d",isayi2);
	
	else if (isayi3>isayi1 && isayi3>isayi2)
	printf("%d",isayi3);
	
	getch();
	return 0;



}


#include <stdio.h>
#include <conio.h>
#define yaz printf
#define degeral scanf
 
int main (void)
{

int kose1,kose2,kose3;

yaz("Birinci koseyi giriniz :");
    degeral("%d",&kose1);

yaz("Ikinci koseyi giriniz: ");
    degeral("%d",&kose2);

yaz("ucuncu koseyi giriniz: ");
    degeral("%d",&kose3);
    
if ((kose1==kose2)&&(kose2==kose3))

	yaz("Eskenar Ucgen");

else if ((kose1!=kose2)&&(kose2!=kose3))

	yaz("Cesitkenar Ucgen");

else 

	yaz("Ikizkenar Ucgen");

getch();
return 0;
	
	}

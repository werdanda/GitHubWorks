#include <stdio.h>
#include <conio.h>

int main (void)
{

int isayi1,isayi2,isonuc;
int idegisken;

printf("Birinci sayiyi giriniz : ");
	scanf("%d",&isayi1);
printf("Ikinci sayiyi giriniz : ");
	scanf("%d",&isayi2);
printf("Yapmak istediginiz degiskeni giriniz\n");
printf("(1)Toplama islemi yapar.\n(2)Cikarma islemi yapar.\n(3)Carpma islemi yapar.\n(4)Bolme islemi yapar.\n(5)Modunu bulur.\nDegisken :  ");
	scanf("%d",&idegisken);
	
	
	switch(idegisken)
{
	
	case 1 :
		isonuc = isayi1 + isayi2;
	break;
	
	case 2 :
		isonuc = isayi1 - isayi2;
	break;
	
	case 3 :
		isonuc = isayi1 * isayi2;
	break;
	
	case 4 :
		isonuc = isayi1 / isayi2;
	break;

	case 5 : 
       isonuc= isayi1%isayi2;
	break;

	}			
	printf("Isleminizin sonucu %d dir. ",isonuc);
	getch();
	return 0;
}

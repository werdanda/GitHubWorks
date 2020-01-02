#include <stdio.h>
#include <conio.h>

int main (void)
{

int inot;

printf("Lutfen notunuzu giriniz: ");
scanf("%d",&inot);

if (inot==0 && inot<40)

	printf("F");

else if (inot>40 && inot<55)
	printf("D");

else if (inot>55 && inot<70)
	printf("C");
else if (inot>70 && inot<85)
	printf("B");
else 
	printf("A");
	
	getch();
	return 0;

}



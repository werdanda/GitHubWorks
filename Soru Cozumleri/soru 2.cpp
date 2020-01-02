#include <stdio.h>
#include <conio.h>

int main (void)

{
	int ivize,ifinal,iproje,isonuc;
	
	printf("Vize notunuzu giriniz: ");
	scanf("%d",&ivize);
	printf("Final notunuzu giriniz: ");
	scanf("%d",&ifinal);
	printf("Proje notunuzu giriniz: ");
	scanf("%d",&iproje);
	
	isonuc=(0.3*ivize)+(0.2*iproje)+(0.5*ifinal);
	
	if (isonuc<50)
		printf("KALDI");
	else 
		printf("GECTI");
		
	getch();
	return 0;
}

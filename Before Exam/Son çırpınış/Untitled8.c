#include <stdio.h>
#include <conio.h>

int main()
{
    FILE *file1;

    file1 =fopen("notlar.txt","w");

    char isim[50];
    char soyad[50];
    int no;

    int i,sayi;

    printf("Kac tane ogrenci bilgisi girmek istiyorsun? : ");
    scanf("%d",&sayi);

    for(i=1; i<=sayi; i++)
        {
            printf("Ogrenci adi giriniz : ");
            scanf("%s",&isim);
            printf("Ogrenci soyadi giriniz : ");
            scanf("%s",&soyad);
            printf("Ogrenci no giriniz : ");
            scanf("%d",&no);
            printf("\n");
            fprintf(file1,"%s %s %d\n",isim,soyad,no);


        }







}

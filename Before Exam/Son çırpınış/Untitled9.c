#include <stdio.h>
#include <conio.h>

int main()
{
    FILE *file1;
    file1 = fopen("bilgi.txt","r");
    int no;
    char isim[50];
    char soyad[50];

        while(!feof(file1))
        {
            fscanf(file1,"%d",&no);
            fscanf(file1,"%s",&isim);
            fscanf(file1,"%s",&soyad);
            printf("%d %s %s\n",no,isim,soyad);


        }
    fclose(file1);



}

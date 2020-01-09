#include <stdio.h>
#include <conio.h>

 int main()
 {
     FILE *file1;
     file1 = fopen("bilgi.txt","r");

     int sayac=1;
     char satir;

        while(!feof(file1))
        {

          satir = fgetc(file1);
          if(satir == '\n')
            {
                sayac++;
            }


        }

     printf("%d",sayac);
     fclose(file1);


 }

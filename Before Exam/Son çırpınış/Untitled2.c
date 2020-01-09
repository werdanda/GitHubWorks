#include <stdio.h>
#include <conio.h>
//Burda for un içine dikkat etmek gerek dizi örneðin 5 elemandan oluþuyorsa 0<=4 demek 0 1 2 3 4 yani 5 elemana ulaþacaktýr.
int main()
{
    int i=0;
    int dizi[5]={1,2,3,4,5};

    for(i=0; i<=4; i++)
        {
            printf("%d",dizi[i]);
            printf("\n");
        }



}

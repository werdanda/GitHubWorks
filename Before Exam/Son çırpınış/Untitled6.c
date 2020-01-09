#include<stdio.h>
#include<conio.h>
//burda p 0. dizinin adresini gösterir. ama *p pointer da o adresteki deðeri bize gösterir.
int main()
{
    int dizi[3]= {1,2,3};
    int *p;

    p=&dizi[0];

    int i;

    for(i=0; i<=2; i++)
        {
            printf("%d\n",*p);
            p++;
        }






}

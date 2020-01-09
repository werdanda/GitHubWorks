#include <stdio.h>
#include <conio.h>

int main()
{
    int sayi;

    FILE *file1;
    file1 = fopen("kader.txt","a");
    fprintf(file1,"Furkan OZKAN\n");
    char isim[50] = "furkan";
    fprintf(file1,"%c\n",isim[2]);






}

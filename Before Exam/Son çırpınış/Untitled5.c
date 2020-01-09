#include<stdio.h>
#include<conio.h>

int main()
{
    int matris[3][3];
    int satir,sutun;

    for(satir=0; satir<=2; satir++)
        {
            for(sutun=0; sutun<=2; sutun++)
            {
                    printf("%d %d yi giriniz : ",satir,sutun);
                    scanf("%d",&matris[satir][sutun]);
            }
                printf("\n");
        }


    for(satir=0; satir<=2; satir++)
        {
            for(sutun=0; sutun<=2; sutun++)
                {
                    printf("%d",matris[satir][sutun]);
                }
            printf("\n");

        }



}

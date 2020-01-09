#include <stdio.h>
#include <conio.h>

int main ()
{
 int satir=0,sutun=0,bosluk;
    for(satir=1; satir<=4; satir++)
        {
            for(bosluk=3; bosluk>=satir; bosluk--)
            {
                printf(" ");
            }
            for(sutun=1; sutun<=(satir*2)-1; sutun++)
            {
                printf("+");
            }
            printf("\n");
        }

     int satir1=0,sutun1=0,bosluk1,deg=7;


      for(satir1=1; satir1<=4; satir1++)
        {
            for(bosluk1=1; bosluk1<satir1; bosluk1++)
            {
                printf(" ");
            }
            for(sutun1=1; sutun1<=deg; sutun1++)
            {
                printf("+");
            }
            deg = deg-2;
            printf("\n");
        }
}

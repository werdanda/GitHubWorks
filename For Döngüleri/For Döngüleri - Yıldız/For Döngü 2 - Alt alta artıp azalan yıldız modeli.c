#include <stdio.h>
#include <conio.h>

int main()
{
    int satirust,sutunust;
    for(satirust=1; satirust<=5; satirust++)
        {
            for(sutunust=1; sutunust<=5; sutunust++)
                {
                    printf("*");
                }
            printf("\n");

        }

        int satiralt,sutunalt;
        for(satiralt=1; satiralt<=5; satiralt++)
            {
                for(sutunalt=6; sutunalt>satiralt; sutunalt--)
                {
                    printf("+");

                }
                printf("\n");
            }




}

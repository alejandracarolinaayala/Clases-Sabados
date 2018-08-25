#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, max, min, flag = 0,acum=0;
    float prom;
        for (int i=0;i<10;i++)
        {
            printf("Ingrese un numero: ");
            scanf("%d",&num);
            acum= acum + num;
            if(flag == 0)
                {
                    max = num;
                    min = num;
                    flag = 1;
                }
             if(num>max)
                {
                    max = num;
                }
             if(num<min)
                {
                    min = num;
                }

        }

        prom =(float)acum / 10 ;
     printf("\nMaximo: %d -- Minimo: %d",max,min);
     printf("\npromedio: %.2f",prom);



    return 0;
}

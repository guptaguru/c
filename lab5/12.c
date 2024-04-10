#include<stdio.h>
int main()
{
    int a,b,i,hcf,lcm;
    printf("enter any two number");
    scanf("%d%d",&a,&b);
      for (i = 1; i <= a && i <= b; ++i) {
        if (a % i == 0 && b % i == 0) 
            hcf = i;
    
    }

    lcm=(a*b)/hcf;
    printf("\nlcm=%d\thcf=%d",lcm,hcf);
    return 0;
}
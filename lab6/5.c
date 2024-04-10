#include<stdio.h>
int swap(int*,int*);
int main()
 {
    int a,b;
    printf("enter the value of a and b");
    scanf("%d%d",&a,&b);
    printf("Before Swapping\ta=%d\tb=%d\n",a,b);
    swap(&a,&b);
    printf("After Swapping\ta=%d\tb=%d",a,b);
 }
 int swap(int *a,int *b)
  {
    int t;
    t=*a;
    *a=*b;
    *b=t;
  }
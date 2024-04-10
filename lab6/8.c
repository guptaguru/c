#include<stdio.h>
int global;
void display();
int main()
{ 
 global=5;
 printf("Global Variable in main function just before call=%d\n",global);
 display();
 printf("Global Variable in main function after calling=%d\n",global);
 display();
 display();
}
void display()
{
    static int a=5;
    a++;
    global=200;
    global++;
    printf("Static variable=%d\t",a);
    printf("Global variable=%d\t",global);
    printf("\n");
}
#include<stdio.h>
#include<string.h>
int main()
{
    char *s[]={"Gate","Ram","Good evening"},**p;
    p=&s[0];
    printf("%s\n",*p+1);
    printf("%s\n",*(p+1));
    return 0;
    
}
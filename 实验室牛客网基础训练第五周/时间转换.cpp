#include<stdio.h>
int main()
{
    int sec , a,b,c;
    scanf("%d ",&sec);
    a=sec/3600;
    b=(sec-3600*a)/60;
    c=(sec-3600*a-b*60);
        printf("%d %d %d",a,b,c);
}

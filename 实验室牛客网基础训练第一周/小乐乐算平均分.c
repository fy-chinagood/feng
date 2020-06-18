#include<stdio.h>
int main()
{
    float a,b,c,s,t;
    scanf("%f %f %f",&a,&b,&c);
    s=a+b+c;
    t=(a+b+c)/3;
    printf("%.2f %.2f",s,t);
    return 0;
}

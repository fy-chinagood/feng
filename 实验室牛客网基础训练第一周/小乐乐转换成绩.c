#include<stdio.h>
int main ()
{
    int i;
    char c;
    scanf("%d",&i);
    if(i>=90&&i<=100)
        c='A';
    else if (i>=80&&i<=89)
        c='B';
    else if (i>=70&&i<=79)
        c='C';
    else if (i>=60&&i<=69)
        c='D';
    else if (i<=59&&i>=0)
        c='E';
    else c='F';
    printf("%c",c);
    return 0;
}

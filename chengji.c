#include<stdio.h>
int main()
{
    int i;
    scanf("%d",i)
    if (i>=90&&i<=100)
    printf("%c",'A');
    else if£¨i>=80&&i<=89)
    printf("%c",'B');
    else if (i>=70&&i<=79)
    printf("%c",'C');
    else if (i>=60&&i<=69)
     printf("%c",'D');
    else if (i<=59)
     printf("%c",'E');
    else printf("%c",'F');
    return 0;
}

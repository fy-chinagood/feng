#include<stdio.h>
int main ()
{
    int i,j,k;
    scanf("%d %d %d",&i,&j,&k);
    if((i+j+k)/3>=60){
        printf("NO");
    }
    else{
        printf("YES");
    }
    return 0;
}

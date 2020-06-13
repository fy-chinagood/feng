#include<stdio.h>
int main()
{
    int i,j,k,l;
    scanf("%d %d %d %d",&i,&j,&k,&l);
    int tmp=i;
        if (j>tmp){
            tmp=j;}
        if (k>tmp){
            tmp=k;}
        if (l>tmp){
            tmp=l;}
    printf("%d",tmp);
    return 0 ;
}

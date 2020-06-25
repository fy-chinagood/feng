#include <stdio.h>
 
int main()
{
    char c;
    while(~scanf("%c\n",&c))
    {
        if(c>='a'&&c<='z')
            c = c - 32;
        else
            c = c + 32;
        printf("%c\n",c);
     
    }
     
     
    return 0;
}


#include <stdio.h>
 
int main()
{
    double n,score;
    double sum = 0;
    double min = 1000;
    double max = 0;
    scanf("%lf", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &score);
        sum += score;
        if (min > score)
        {
            min = score;
        }
        if (max < score)
        {
            max = score;
        }
    }
    printf("%.2lf %.2lf %.2lf\n",max,min,sum/n);
}

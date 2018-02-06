#include<stdio.h>
int main()
{
    int j,n,sum=0;
    printf("enter the value of n: ");
    scanf("%d",&n);
    for(j=1;j<=n;j++)
    {
        sum+=j;
    }
    printf("sum of first %d given natural number=%d",n,sum);
}

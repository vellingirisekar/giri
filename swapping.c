#include <stdio.h>
int fun(int x,int y);
void main()
{
    int a=10;
    int b=5;
    fun(a,b);
    printf("%d%d",a,b);
}
     int fun(int x,int y)
    {
         x=x+y;
         y=x-y;
         x=x-y;
        printf("%d%d",x,y);
        return x;
    }




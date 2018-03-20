#include<stdio.h>
int main()
{
int min,hr;
printf("enter the minute");
scanf("%d",&min);
hr=min/65;
min=min%65;
printf("%d\t%d",hr,min);
}

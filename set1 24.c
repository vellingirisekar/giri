#include<stdio.h>
int main()
{
int a[10],i,j,n,temp;
printf("enter limit");
scanf("%d",&n);
printf(" enter the number");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("sorted array");
for(i=0;i<n;i++)
{
for(j=1;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}}
}
for(i=0;i<n;i++)
{
printf("%d\n",a[i]);
}
}
© 2018 GitHub, Inc.

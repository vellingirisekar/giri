#include <stdio.h>
void main()
{
    int *a,*b, oil=9,cake=6;
    a=&oil;
    b=&cake;
    char ch;
    printf("enter the product \na. oil\nb. cake");
    scanf("%c",&ch);
    switch(ch)
{
    case 1:
    printf("\n%d",*a);
    break;
    case 2:
    printf("\n%d",*b);
    break;
}
}

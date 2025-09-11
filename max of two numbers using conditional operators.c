#include<stdio.h>
void main()
{
    int a, b, max;
    printf("enter two  numbers: ");
    scanf("%d %d", &a,&b);
    //conditional operator
    max = (a>b) ? a : b;
    printf("Maximum number is = %d\n", max);
    return 0;
}

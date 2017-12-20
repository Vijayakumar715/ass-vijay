#include <stdio.h>
int main(void)
{
    int x;
    scanf("%d",&x);
    if(x>0)
    {
        printf("Number is positive");
    }
    if(x<0)
    {
        printf("Number is negative");
    }
    if(x==0)
    {
        printf("Zero");
    }
}

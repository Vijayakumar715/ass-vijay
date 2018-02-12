#include<stdio.h>
void main()
{
 int year;
 printf("Enter the year:");
 scanf("%d",&year);
 if((year%4==0)&&((year%100!=0)||(year%400==0)))
  printf("\nThe year %d is leap year",year);
 else
  printf("\n The year %d is not leap year",year);
}

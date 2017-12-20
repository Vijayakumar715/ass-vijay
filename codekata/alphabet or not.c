#include<stdio.h>
int main(void)
{
char ch;
printf("Enter any character");
scanf("%c",&ch);
if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
{
printf("\nCharacter is alphabet");
}
else
{
printf("\nCharacter is not alphabet");
}
}

/* printing the first and last digit of a number */

#include<stdio.h>
int main()

{ int n,temp,rem=0;
printf("Enter number:");
scanf("%d",&n);
temp=n;
while(temp!=0)
{
    rem=temp%10;
    temp=temp/10;
    if(temp==0)
    printf(" The first digit of the number is %d \n",rem);
}
printf("The last digit of the number is %d",n%10);
return 0;
}

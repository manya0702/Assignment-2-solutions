/* counting the number of digits of a number */

#include<stdio.h>
int main()

{int n,count=0,temp,rem;
printf("Enter the number:");
scanf("%d",&n);
temp=n;
while(temp!=0)
{
    rem=temp%10;
    temp=temp/10;
    if(rem!=0)
    {count=count+1;}
}
printf("The number of digits in %d are: %d",n,count);
return 0;
}

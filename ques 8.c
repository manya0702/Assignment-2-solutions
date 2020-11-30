/* printing the frequency of every digit of a number */

#include<stdio.h>
#include<math.h>

int countdig(int num)
{
int countdig=(int)log10(num)+1;

return countdig;
}

int main()
{ int n,temp,rem,i;
printf("Enter any number:");
scanf("%d",&n);
printf("The number of digits in %d is %d \n",n,countdig(n));
int count[10]={0};
temp=n;
while(temp!=0)
{
    rem=temp%10;
    temp=temp/10;
    count[rem]+=1;
}
for(i=0;i<10;i++)
{
    if(count[i]!=0)
    {printf("The frequency of %d in %d is %d \n",i,n,count[i]);}
}

return 0;
}


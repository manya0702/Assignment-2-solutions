/* printing sum of odd numbers between 1 to n */

#include<stdio.h>
int main()

{int n,i,sum;
printf("Enter the last term of the sequence:");
scanf("%d",&n);
sum=0;
if(n%2==0)
{  for(i=1;i<n;i=i+2)
    {printf("%d \n",i);
    sum=sum+i;}
    printf(" \n The sum of the odd numbers between 1 to %d is: %d",n,sum);
}

else
{
    for(i=1;i<=n;i=i+2)
    {printf("%d \n",i);
    sum=sum+i;}
    printf(" \n The sum of the odd numbers between 1 to %d is: %d",n,sum);
}
return 0;
}

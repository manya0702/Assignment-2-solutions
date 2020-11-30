/* printing a given number in words */

#include <stdio.h>
int main()

{int n,rem,temp=0;
printf("Enter the number :");
scanf("%d",&n);
while(n != 0)
    {
        temp = (temp * 10) + (n % 10);
        n /= 10;
    }
while(temp!=0)
{
    rem=temp%10;
    switch(rem)
    {
        case 0:
            printf(" zero ");
            break;
        case 1:
            printf(" one ");
            break;
        case 2:
            printf(" two ");
            break;
        case 3:
            printf(" three ");
            break;
        case 4:
            printf(" four ");
            break;
        case 5:
            printf(" five ");
            break;
        case 6:
            printf(" six ");
            break;
        case 7:
            printf(" seven ");
            break;
        case 8:
            printf(" eight ");
            break;
        case 9:
            printf(" nine ");
            break;}

temp=temp/10;
 }
return 0;}

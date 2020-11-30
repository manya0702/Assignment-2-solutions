/* printing the multiplication table of any number */

#include<stdio.h>

int mul(int num)
{ int i;
for(i=1;i<=10;i++)
    printf("%d*%d=%d \n",num,i,num*i);
return mul;
}
int main()
{ int n;
printf("Enter any number:");
scanf("%d",&n);
mul(n);
return 0;

}




#include<stdio.h>
int main()
{
int n,num,sum=0,rev;
printf("Enter five digit number");
scanf("%d",&num);

while(num!=0)
{

n=num/10;
num=num%10;
rev=sum*10+num;

printf("%d",rev);
}
return 0;
}


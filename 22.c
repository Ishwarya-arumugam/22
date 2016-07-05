#include<stdio.h>
void c(char num[3],int n)
{
if(n>0)
{
num[3-n]='0';
c(num,n-1);
num[3-n]='1';
c(num,n-1);
}
else
{
printf("%s",num);
}
}
void main()
{
char num[]={0};
int n;
scanf("%d",&n);
c(num,n);
}

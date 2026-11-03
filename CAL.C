#include<stdio.h>
int main()
{
int a,b;
char op;
printf("enter first number:");
scanf("%c",&a);
printf("enter opertor(+,-,*,/):");
scanf("%c",&op);
printf("enter second number:");
scanf("%d",&b);
switch(op)
{
case'+':
printf("result = %d",a+b);
break;
case'-':
printf("result = %d",a-b);
break;
case'*':
printf("result =%d",a*b);
break;
case'/':
printf("result =%d",a/b);
if(b!=0);
else
printf("cannot divided by zero!");
break;
default:
printf("invaild operator!");
}
return 0;
}

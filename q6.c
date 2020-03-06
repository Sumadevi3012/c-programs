#include<stdio.h>
void main()
{
int a,b,ch;
printf("entera,b values\n");
scanf("%d%d",&a,&b);
printf("1,add");
printf("2,sub");
printf("4,div");
printf("enter your ch");
scanf("%d",&ch);
switch(ch)
{
case1:
printf("%d",a+b);
break;
case2:
printf("%d",a-b);
break;
case3:
printf("%d",a*b);
break;
case4:
printf("%d",a/b);
break;
default:
printf("nothing");
}
}





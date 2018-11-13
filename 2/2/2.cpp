#include <stdio.h>
#include<stdlib.h>
void main()
{
int i,a=5,n,Sn=0,term=0;
printf("请输入一个数n=");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
term=term*10+a;
Sn=Sn+term;
}
printf("a+aa+aaa+...+a...a=%d",Sn);
system("pause");
} 
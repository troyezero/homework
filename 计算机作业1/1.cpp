#include <stdio.h>
#include<stdlib.h>
int main()
{
int a=0,b=0,c=0,d=0;
char n;
printf("����һ���ַ�\n");
for(;n!='\n';)
{
scanf("%c",&n);
if((('a'<=n)&&(n<='z'))||(('A'<=n)&&(n<='Z')))
a++;
else if(n==' ')
b++;
else if('0'<=n&&n<='9')
c++;
else
d++;
}
printf("Ӣ����ĸ=%d,�ո�=%d,����=%d,�����ַ�=%d\n",a,b,c,d);
system("pause");
} 
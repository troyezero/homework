#include <stdio.h>
#include<stdlib.h>
int main()
{
int a=0,b=0,c=0,d=0;
char n;
printf("输入一串字符\n");
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
printf("英文字母=%d,空格=%d,数字=%d,其他字符=%d\n",a,b,c,d);
system("pause");
} 
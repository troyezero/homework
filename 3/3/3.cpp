#include<stdio.h>
#include<stdlib.h>
void main()
{int a,b=1,sum=0;
	for(a=1;a<20;a++)
	b=b*a;
	sum=b+sum;
	printf("1!+2!+...+20!=%d\n",sum);
	system("pause");
}
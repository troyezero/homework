#include <stdio.h>
#include<stdlib.h>
void main()
{
    int a,b,c,d;
    for(a=1;a<10;a++)
    {
        for(b=0;b<10;b++)
        {
            for(c=0;c<10;c++)
            {
				d=100*a+10*b+c;
                if(d==(a*a*a+b*b*b+c*c*c))
                printf("%d\n",d);
            }
        }
    }
	system("pause");
}
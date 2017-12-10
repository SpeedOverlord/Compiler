#include <stdio.h>
int main()
{
    int i,a,b,c,d,e,f,g;
    a=3;
    b=5;
	c=a+b;
	d=a-b;
	e=a*b;
	f=b/a;
	g=b%a;
	printf("A=3 B=5: %d\n");
	printf("A+B加法: %d\n",c);	
	printf("B-A減法: %d\n",d);
	printf("A*B乘法: %d\n",e);
	printf("B/A除法: %d\n",f);
	printf("B MOD A: %d\n",g);
    return 0;
}

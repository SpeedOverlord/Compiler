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
	printf("A+B�[�k: %d\n",c);	
	printf("B-A��k: %d\n",d);
	printf("A*B���k: %d\n",e);
	printf("B/A���k: %d\n",f);
	printf("B MOD A: %d\n",g);
    return 0;
}

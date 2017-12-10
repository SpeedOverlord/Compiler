#include <stdio.h>

int fibonacci(int i) {
    if (i <= 1) {
        return 1;
    }
    return fibonacci(i-1) + fibonacci(i-2);
}

int main()
{
	char ee;
	int i,a,b,c,d,e,f,g;
    printf("加減乘除MOD==================\n"); 
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
    i = 0;
    ee='a';
    printf("=============================\n");
    printf("函式與=======================\n");
    while (i <= 10) {
        printf("fibonacci(%2d) = %d\n", i, fibonacci(i));
        i = i + 1;
    }
    i=0;
    printf("=============================\n");
    printf("IF ELSE======================\n");
     while (i <= 10) {
        printf("i count = %d\n", i);
        i = i + 1;
		if(i>=8)
			printf("I >= 8\n");
		else
			printf("I < 8\n");
    } 
    i=0;
    printf("=============================\n");
    printf("支援CHAR=====================\n");
     while (i <= 2) {
        printf("e count = %c\n", ee);
        i = i + 1;
    } 
    return 0;
}

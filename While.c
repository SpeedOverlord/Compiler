#include <stdio.h>

int fibonacci(int i) {
    if (i <= 1) {
        return 1;
    }
    return fibonacci(i-1) + fibonacci(i-2);
}

int main()
{
    int i,a,b,c,d;
    i=1;
     while (i <= 10) {
        printf("i count = %d\n", i);
		if(i>=8)
			printf("I >= 8\n");
		else
			printf("I < 8\n");
		i = i + 1;
    } 
    return 0;
}

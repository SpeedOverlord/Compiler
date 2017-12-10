#include <stdio.h>

int fibonacci(int i) {
    printf("I in function = %d\n", i);
    return i+1;
}

int main()
{
    int i,a,b,c,d;
    char ee;
    i = 0;
    a=3;
    b=5;
    ee='a';
    fibonacci(i);
    printf("I in main use printf\n");
    printf("fibonacci(%2d) = %d\n", i, fibonacci(i));

    return 0;
}

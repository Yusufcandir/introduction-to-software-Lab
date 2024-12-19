#include <stdio.h>

//function declaration.
int multiply(int x, int y);

int main()
{
    int result = multiply(5,3);
    printf("Result: %d\n", result);
    return 0;
}

//function definition.
int multiply(int x, int y)
{
    return x * y;
}



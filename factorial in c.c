#include <stdio.h>


{
    int result = 1, i;


    for (i = 2; i <= n; i++) {
        result *= i;
    }

    return result;
}


int main()
{
    int num = 5;
    printf("Factorial of %d is %d", num, factorial(num));
    return 0;
}

#include <stdio.h>

int main() {
    long int num1, num2;
    unsigned long int u_num;
    signed short int s_num1;
    signed short s_num2;
    int result;

    num1 = 28;
    num2 = 11;

    result = num1 + num2;
    printf("%d\n", result);

    result = num1 - num2;
    printf("%d\n", result);

    result = num1 * num2;
    printf("%d\n", result);

    result = num1 / num2;
    printf("%d\n", result);

    result = num1 % num2;
    printf("%d\n", result);

    result = (num1 >= num2);
    printf("%d\n", result);

    result = (num1 <= num2);
    printf("%d\n", result);

    result = (num1 == num2);
    printf("%d\n", result);

    result = (num1 != num2);
    printf("%d\n", result);
}



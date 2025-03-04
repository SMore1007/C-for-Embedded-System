#include<stdio.h>

int main()
{
    int result;
    char op;
    int num1, num2;
    printf("Enter a num1 and num2\n");
    scanf("%d %d", &num1, &num2);
    fflush(stdin);
    printf("Operations: +,-,*, /\n");
    scanf("%c", &op);

    switch (op)
    {
    case '+':
        result = num1 + num2;
        break;
    case '-':
        result = num1 - num2;
        break;
    case '*':
        result = num1 * num2;
        break;
        case '/':
        result = num1 / num2;
        break;
    case '%':
        result = num1 % num2;
        break;   
    default:
        printf("Enter correct opration\n");
        break;
    }

    printf("Result : %d\n", result);
    return 0;
}
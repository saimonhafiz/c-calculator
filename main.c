#include<stdio.h>

int main() {
    float valueOne;
    float valueTwo;
    char operator;
    int result;
    scanf("%f %c %f", &valueOne, &operator, &valueTwo);
    switch (operator)
    {
    case '+':
        result = valueOne + valueTwo;
        break;
    case '-':
        result = valueOne - valueTwo;
        break;
    case '*':
        result = valueOne * valueTwo;
        break;
    case '/':
        result = valueOne / valueTwo;
        break;
    
    default:
        printf("Invalid input! Please try again and make sure that you keep space between operator and operands.");
        result = 0;
        break;
    }
    printf("%d", result);

    return 0;
}
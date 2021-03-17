#include<stdio.h>

int main(){
    char Operator;
    float num1, num2, result = 0;

    printf("\n Enter an Operator (+,-,*,/) : \n");
    scanf("%c", &Operator);

    printf("Enter First Number:\n");
    scanf("%f", &num1);
    printf("Enter Second Number:\n");
    scanf("%f", &num2);

    switch (Operator)
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
    default:
           printf("\n INVALID OPERATOR ");
    }
    printf("The result of %.2f %c %.2f = %.2f", num1, Operator, num2,result);
    return 0;
}
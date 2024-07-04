#include <stdio.h>
#include <stdlib.h>

int main() {
    int number1; //variable for number 1
    int number2; //variable for number 2
    float result; //variable for result
    char operation; // variable for operator
    /* Choosing what operator*/
    printf("Choose an operator(+,*,-,/) to perform the operation in C calculator\n");
    scanf("%c", &operation);
    
    if (operation == "/")
    {
        printf("You have selected: Divison");
    } else if (operation == "*")
    {
        printf("You have selected: Multiplication");
    }  else if (operation == "+")
    {
        printf("You have selected: Addition");
    } else if (operation == "-")
    {
        printf("You have selected: Subtraction");
    }
    /* entering number*/
    printf("\n Enter the first number:");
    scanf("%d", &number1);
    printf("Enter Second number:");
    scanf("%d", &number2);
    /*solve number 1 + number 2*/
    switch (operation)
    {
    case '+':
        result = number1 + number2;
        printf("Addition of %d and %d is: %.2f", number1, number2, result);
        break;
    case '-':
        result = number1 - number2; 
        printf("Substraction of %d and %d is: %.2f", number1, number2, result);
    case '*':
        result = number1 * number2;
        printf("Multiplication of %d and %d is: %.2f", number1, number2, result);
    case '/':
        if (number2 == 0)
        {
            printf("\n Divisor cannot be zero. Please enter another value ");
            scanf("%d", &number2);
        }
        result = number1 / number2;
        printf("Divison of %d and %d is: %.2f", number1, number2, result);
        break;
    default:
    printf("Something is wrong!!!! Please check the options"); // if happened wrong

        break;
    }
    return 0;
}
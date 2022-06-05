//
//  Self made Calculator.c
//  C Programming
//
//  Created by Abhijat Dakshesh on 08/02/22.
//

#include <stdio.h>



int main()
{
    char operator;
    int a, b, result;
    
    printf("Enter the two numbers:\n");
    scanf("%d%d", &a, &b);
    printf("Enter the Choice of Operation (+,-,*,/");
    scanf("%c", &operator);
    
    if(operator == '+')
    {
        result = a+b;
        printf("The result of the operation is %d", result);
    }
    else if (operator == '-')
    {
        result = a-b;
        printf("The result of the operation is %d", result);
    }
    else if (operator == '*')
    {
        result = a*b;
        printf("The result of the operation is %d", result);
    }
    else if (operator == '/')
    {
        result = a/b;
        printf("The result of the operation is %d", result);
    }
    else
    {
        printf("Invalid Operations Cannot be performed");
    }
}

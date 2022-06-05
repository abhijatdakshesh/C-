// Program to design a simple Calculator

#include <stdio.h>
void main()
{
    int num1, num2;
    float result;
    char operation;
    
    printf("Enter The operation('+','-','*','/')");
    scanf("%c", &operation);
    printf("Enter the Two numbers");
    scanf("%d%d", &num1, &num2);
    
    switch (operation){
        case('+'): result = num1+num2;
            break;
        case('-'): result = num1-num2;
            break;
        case('*'): result = num1*num2;
            break;
        case('/'): result = num1/num2;
            break;
            
        default:printf("Inavlid Input");
    }
    
    printf("The Result of  %d %c %d is %f ",num1,operation,num2,result);
}

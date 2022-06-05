//
//  My Calculator.c
//  C Programming
//
//  Created by Abhijat Dakshesh on 11/01/22.
//

#include <stdio.h>
int main(){
    char Operator;
    float num1, num2, result;
    printf("\n Please Enter an Operator (+, -, *, /)  :  ");
      scanf("%c", &Operator);
      
    printf("\n Please Enter the Values for two Operands: num1 and num2  :  ");
      scanf("%f%f", &num1, &num2);
    if (Operator == '+'){
        result = num1+num2;
        
    }
    if (Operator == '-'){
        result = num1-num2;
    }
    if (Operator == '*'){
        result = num1*num2;
    }
    if (Operator == '/'){
        result =num1/num2;
    }
    printf("The result is %f%c%f=%f\n",num1,Operator,num2, result);
}

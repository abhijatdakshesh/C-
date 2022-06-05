//
//  Exam Practice Questions.c
//  C Programming
//
//  Created by Abhijat Dakshesh on 08/02/22.
// Program to Calculate the factorial of the given number

#include <stdio.h>
#include <math.h>
int main()
{
    int n, fact, i;
    i = 1;
    fact = 1;
    printf("Enter the vale of n:\n");
    scanf("%d", &n);
    while(i<=n){
        i = i+1;
        fact= fact*i;
        printf("The factotial of %d is %d\n",n,fact);
    }
    
    return 0;
}

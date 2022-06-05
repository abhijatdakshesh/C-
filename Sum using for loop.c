//
//  Sum using for loop.c
//  C Programming
//
//  Created by Abhijat Dakshesh on 03/02/22.
//

#include <stdio.h>
#include <stdlib.h>
int  main()
{
    int i, num;
 
    printf("Enter the value of num\n");
    scanf("%d", &num);
    for (i = 2; i <= num/2; i++)
    {
        if (num % i == 0)
        {
            printf("It's not a prime number\n");
            exit(0);
        }
            
    }
    printf("The given number is a prime number\n", num);
    
}

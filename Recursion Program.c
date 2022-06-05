//
//  Recursion Program.c
//  C Programming
//
//  Created by Abhijat Dakshesh on 10/04/22.
//

#include <stdio.h>
int convert(int);
int main()
{
    int dec,bin;
    printf("Enter the Binary Number only\n");
    scanf("%d", &bin);
    dec = convert(bin);
    printf("The decimal Equivalent to %d is %d\n",bin,dec);
    
}
int convert(int bin)
{
    if(bin ==0)
    {
        return 0;
    }
    else
    {
        return (bin % 10 + 2 * convert(bin/10));
    }
}



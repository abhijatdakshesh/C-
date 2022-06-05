//
//  Area of Cirlce.c
//  C Programming
//
//  Created by Abhijat Dakshesh on 08/05/22.
//

#include <stdio.h>

int main()
{
    float result, r, area;
    printf("Enter the radius of the cirlce\n");
    scanf("%f", &r);
    
    area = 3.14*r*r;
    
    result = area;
    printf("The area of the Circle is %f\n", result);
}

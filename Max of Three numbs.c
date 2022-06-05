//
//  Max of Three numbs.c
//  C Programming
//
//  Created by Abhijat Dakshesh on 12/01/22.
//

#include <stdio.h>
int main(){
    int num1, num2, num3, big;
    printf("Enter the Three numbers\n");
    scanf("%d%d%d", &num1, &num2, &num3);
    if( num1 > num2 && num1 > num3){
        big = num1;
        printf("The Greatest is %d\n", big);
    }
    if( num2 > num1 && num2 > num3){
        big = num2;
        printf("The Greatest is %d\n", big);
    }
    if( num3 > num1 && num3 > num2){
        big = num3;
        printf("The Greatest is %d\n", big);
    }
    
}

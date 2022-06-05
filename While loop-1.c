//
//  While loop-1.c
//  C Programming
//
//  Created by Abhijat Dakshesh on 27/01/22.
//

#include <stdio.h>
int main(){
    int i;
    i = 0;
    printf("Enter Your Starting number of the loop (less than 10)");
    scanf("%d", &i);
    while (i < 10) {
        printf("%d\n",i);
        i++;
    }
}

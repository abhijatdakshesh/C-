//
//  Marks.c
//  C Programming
//
//  Created by Abhijat Dakshesh on 13/01/22.
//

#include <stdio.h>
int main(){
    int marks;
    printf("Enter your marks\n");
    scanf("%d", &marks);
    if(marks >= 90){
        printf("Outstanding results\n");
    }
    else if( marks >= 80){
        printf("A grade\n");
    }
    else if(marks >= 70){
        printf("B grade\n");
    }
    else if (marks >= 60){
        printf("C grade\n");
    }
    else if (marks >= 50){
        printf("D grade\n");
    }
    else if (marks >= 40){
        printf("E grade\n");
    }
    else{
        if(marks < 40){
            printf("U have failed\n");
        }
    }
}

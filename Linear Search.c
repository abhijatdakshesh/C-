//
//  Linear Search.c
//  C Programming
//
//  Created by Abhijat Dakshesh on 03/03/22.
//

#include <stdio.h>
int main(){
    int a[100], search, i , n;
    
    printf("Enter the length of the array\n");
    scanf("%d", &n);
    
    printf("Enter the elements in the Array\n");
    for(i=0;i<n;i++){
        scanf("%d", &a[i]);
    }
    
    printf("Enter the Number to be searched\n");
    scanf("%d", &search);
    
    for(i=0;i<n;i++){
        if(search == a[i]){
            printf("%d THE ELEMENT FOUND AT %d location", search, i+1);
            break;
        }
    }
    if(i==search){
        printf("The Elmentt wasn't found in the array");
    }
    
}

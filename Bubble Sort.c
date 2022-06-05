// Bubble Sort
#include<stdio.h>

void main(){
    int i,j,a[100],temp,n;
    printf("Enter the no. of elements in Array");
    scanf("%d", &n);
    
    printf("Enter the Array");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    
    printf("The Given Array is")
    {
        for(i=0;i<n;i++)
            scanf("%d", a[i]);
    }
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i-1;j++){
            if(a[j]>a[j+1])
                temp = a[j]
                a[j] = a[j+1];
            a[j+1] = temp;
        }
    }
    
    printf("The Sorted Array")
}



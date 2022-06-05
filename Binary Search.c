//
//  Binary Search.c
//  C Programming
//
//  Created by Abhijat Dakshesh on 31/05/22.
//Binary Search

#include <stdio.h>

void main()
{
    int i,n,a[100],mid,key,high,low,found=0;
    
    printf("Enter the no. of elements in array");
    scanf("%d",&n);
    
    printf("Enter the elements of Array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
    printf("Enter the key element to be searched \n");
    scanf("%d", &key);
    
    low = 0;
    high = n-1;
    while(low<=high)
    {
        mid = low+high/2;
        if(key==a[mid])
        {
            found=1;
            break;
        }
        else if(key>a[mid]){
            low = mid-1;
        }
        
        else{
            high = mid+1;
        }
        
    }
    
    if(found==1)
    printf("Item Found at position %d",mid+1);
    
    else
        printf("Item not found");
}

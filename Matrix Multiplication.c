//
//  Matrix Multiplication.c
//  C Programming
//
//  Created by Abhijat Dakshesh on 02/03/22.
// Matrix Multiplication
#include<stdio.h>

void main()
{
    int i,j,n,m,p,q,a[100][100],b[100][100],c[100][100];
    printf("Enter the no. of rows and column for matric A")
    scanf("%d%d", &m,&n);
    printf("Enter the no. of rows and column for matric A")
    scanf("%d%d", &p,&q);
    
    if(n!= p)
    {
        printf("Matrix Multiplication is Not Possible");
    }
    else {
        printf("Enter the elements of Matrix-A");
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                scanf("%d", &a[i][j]);
            }
        }
        printf("Enter the elements of Matrix-B");
        for(i=0;i<p;i++){
            for(j=0;j<q;j++){
                scanf("%d", &b[i][j]);
            }
        }
        
        for (i=0; i<m; i++) {
            for(j=0;j<q;j++){
                c[i][j]=0;
                for(k=0;k<n;k++){
                    c[i][j]=c[i][j]+a[i][k]*b[k][j]
                }
            }
        }
        
        printf("The Matrix-A");
        for(i=0;i<m;i++){
            for(j=0;j<n;j++){
                printf("%d",a[i][j]);
            }
        }
        printf("The Matrix-B");
        for(i=0;i<p;i++){
            for(j=0;j<q;j++){
                printf("%d",b[i][j]);
            }
        }
        
        printf("The Resultant Matrix-C");
        for (i=0; i<m; i++) {
            for(j=0;j<q;j++){
                printf("%d", c[i][j]);
            }
        }
    
        
    
}

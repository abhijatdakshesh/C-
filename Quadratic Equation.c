// To calculate the Roots of Quadratic Equation


#include<stdio.h>
#include<math.h>

void main()
{
    float a,b,c,d, root1,root2,rpart,ipart;
    printf("Enter Three coeffecients");
    scanf("%f%f%f", &a,&b,&c);
    
    if(a==0&&b==0)
    {
        printf("Invalid Input");
    }
    else if(a==0)
    {
        printf("Linear Quation");
        root1 = -c/b;
        printf("Roots are %.3f",root1);
        
    }
    else
    {
        d = (b*b)-(4*a*c);
        
        if(d==0)
        {
            printf("The Roots are real and equal\n");
            root1 = -b/(2*a);
            root2 = root1;
            printf("The root1 = %.3f and root2 = %.3f\n", root1,root2);
        }
        
        else if(d>0)
        {
            printf("The roots are real and distinct\n");
            root1 = (-b+sqrt(d))/(2*a);
            root2 = (-b-sqrt(d))/(2*a);
            printf("The Roots are root1 = %.3f and root2 = %.3f\n",root1,root2);
            
        }
        else
        {
            printf("The Roots are Imaginary\n");
            rpart = -b/(2*a);
            ipart = sqrt(fabs(d))/(2*a);
            printf("The Roots are root1 = %.3f+i%.3f\n",rpart,ipart);
            printf("The Roots are root2 = %.3f-i%.3f\n",rpart,ipart);
        }
    }
    
}

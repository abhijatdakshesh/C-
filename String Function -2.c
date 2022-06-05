//
//  String Function -2.c
//  C Programming
//
//  Created by Abhijat Dakshesh on 31/05/22.
//

#include <stdio.h>
#include<string.h>

int compare_strings(char[],char []);
void concatenate(char [],char[]);
int  string_length(char[]);

int main()
{
    char s1[100], s2[100];
    printf("Enter String-1");
    gets(s1);
    printf("Eneter String-2");
    gets(s2);
    
    int length1 = string_length(s1);
    int length2 = string_length(s2);
    
    printf("Length os String1 is %s = %d", s1, length1);
    printf("Length of String2 is %s = %d", s2,length2);
    
    if(compare_strings(s1, s2)==0)
        printf("Equal Strings");
    else
        printf("Unequal Strings");
    
    concatenate(s1,s2);
    printf("concatenation obtained %s",s1);
    
int string_length(s1[])
    {
        int i =0;
        while(s1[i]!='\0')
            i++;
    }
    
int compare_strings(s1[],s2[]);
    {
        int i=0;
        while (s1[i] == s2[i])
        {
            if(s1[i]=='\0' || s2[i]=='\0')
                break;
            i++;
        }
        if (s1[i]=='\0' && s2[i]=='\0')
            return 0;
        else
            return 1;
    }
    
    void concatenate(s1[],s2[]):
    {
        int i,j;
        int i =0
        while (s1[i]!='\0')
        {
            i++
        }
        int j= 0
        while (s2[j] != '\0')
        {
            s[i]=s[j];
            j++;
            i++;
            
        }
        s1[i]='\0';
            
    
        
    }
        
    
    
}

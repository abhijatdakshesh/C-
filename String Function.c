//
//  String Function.c
//  C Programming
//
//  Created by Abhijat Dakshesh on 31/05/22.
//Write String function to compare, concatenate and string length

#include <stdio.h>
#include <string.h>

int compare_strings(char[],char[]);
void concatenate_strings(char[],char[]);
int string_length(char[]);

int main()
{
    char s1[100],s2[100];
    printf("Enter String-1");
    gets(s1);
    printf("Enter String-2");
    gets(s2);
    
    int lenght1 = string_length(s1);
    int length2 = string_length(s2);
    
    printf("The Length of String-1 is:%s=%d",s1,lenght1);
    printf("The Length of String-2 is: %s=%d",s2,length2);
    
    if(compare_strings(s1,s2)==0)
    {
        printf("Given Strings are Equal");
    }
    else{
        printf("The Given String is Unequal");
    }

    concatenate_strings(s1, s2);
    printf("The Result of concatention is %s",s1);
}

int string_length(char s1[])
{
    int i = 0;
    while (s1[i]!='\0')
        i++;
        return i;
}

int compare_strings(char s1[], char s2[])
{
    int i=0;
    while (s1[i]=='\0' || s2[i]=='\0') {
        break;
    }
    if (s1[i]=='\0' && s2[i]=='\0') {
        return 0;
    }
    else
        return 1;
}

void concatenate_strings(char s1[], char s2[])
{
    int i,j;
    i = 0;
    while(s1[i]!='\0')
    {
        i++;
    }
    j=0;
    while(s2[j]!='\0')
    {
        s1[i] = s2[j];
        j++;
        i++;
    }
    s1[i] = '\0';
}

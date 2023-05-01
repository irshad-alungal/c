#include<stdio.h>
#include<stdlib.h>
int main()
{
    double n1,n2;
    char operator;
    printf("enter the two numbers:  \n");
    scanf("%1f%1f",&n1,&n2);
    printf("select operation:+,-,*,/:  \n");
    scanf(" %c",&operator);
    if(operator=='+'){
        printf("\n%1f + %1f = %1f",n1,n2,n1+n2);
    }else if(operator=='-'){
         printf("\n%1f - %1f = %1f",n1,n2,n1-n2);
    }else if(operator=='*'){
         printf("\n%1f * %1f = %1f",n1,n2,n1*n2);
    }else if(operator=='/'){
         printf("\n%1f / %1f = %1f",n1,n2,n1/n2);
    }else
    {
        printf("unknown operator");
    }
    
    return 0;
}
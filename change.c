#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num[6]={10,20,30,40,50,60};
    printf("\n num[2] before change is %d",num[2]);
    num[2]=200;
    printf("\n num[2] after change is %d",num[2]);
}
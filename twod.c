#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num[2][3]={{10,20,30},{40,50,60}};
    int sum=0;
    sum=num[0][1]+num[1][2];
       printf("%d",sum);
       return 0;
}
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num[10],i;
    printf("enter the ten numers: ");
    for(i=0 ; i<10 ; i++){
        scanf("%d", &num[i]);
    }
    int sum=0;
    for( i=0 ; i<10 ; i++){
        sum=sum+num[i];
    }
    printf("total sum=%d",sum);
    return 0;
}
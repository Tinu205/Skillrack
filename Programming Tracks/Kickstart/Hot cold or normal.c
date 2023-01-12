#include<stdio.h>
int main()
{
    int temp;
    scanf("%d",&temp);
    if(temp>30){
        printf("Hot");
    }
    else if(temp<20){
        printf("Cold");
    }
    else{
        printf("Normal");
    }
}
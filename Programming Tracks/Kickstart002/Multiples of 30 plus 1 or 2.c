#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    b=a-1;
    c=a-2;
    if(b%30==0 || c%30==0){
        printf("yes");
    }else{
        printf("no");
    }
    
}
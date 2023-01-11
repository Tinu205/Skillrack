#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a>=50 && a<=99){
        printf("half century");
    }else{
        printf("Century");
    }
}
#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int ld = a%10, bf = (a/10)%10;

    if((ld+bf)==b){
        printf("%d",a+b);
    }else{
        printf("%d",a);
    }
}
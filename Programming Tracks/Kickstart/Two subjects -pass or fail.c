#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>=40 && b>=40){
        printf("Pass");
    }else{
        printf("Fail");
    }
}
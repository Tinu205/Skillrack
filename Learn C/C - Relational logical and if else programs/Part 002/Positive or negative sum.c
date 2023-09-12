#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if((a+b)>=0){
        printf("Positive");
    }else{
        printf("Negative");
    }
}
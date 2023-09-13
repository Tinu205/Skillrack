#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if((b-a)>=0){
        printf("Profit=%d",b-a);
    }else{
        printf("Loss=%d",abs(b-a));
    }
}
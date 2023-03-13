#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if((a>9&&a<99)&&(b>99&&b<999)){
        printf("yes");
    }else{
        printf("no");
    }
}
#include<stdio.h>
int main(){
    int X,Y;
    scanf("%d %d",&X,&Y);
    if(X%Y == 0){
        printf("%d",X/Y);
    }else{
        printf("%d",X*Y);
    }
}
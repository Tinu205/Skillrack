#include<stdio.h>
int main(){
    int N, X,count = 0;
    scanf("%d%d",&N,&X);
    for(int i = N; i>0;i--){
        if(i%X != 0){
            printf("%d ",i);
            count = 1;
        }
    }
    if(count == 0){
        printf("-1");
    }
}
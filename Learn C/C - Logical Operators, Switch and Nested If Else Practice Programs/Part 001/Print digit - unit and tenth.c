#include<stdio.h>
int main(){
    int N,D;
    scanf("%d%d",&N,&D);
    if(D==1){
        printf("%d",N%10);
    }else if(D == 2){
        printf("%d",(N/10)%10);
    }else{
        printf("%d",N%10*(N/10)%10);
    }
}
#include<stdio.h>

int main(){
    int value;
    scanf("%d",&value);
    for(int i = 2;i<=value;i++){
        if(i == value){
            printf("YES");
        }else if(value%i == 0){
            printf("NO");
            break;
        }
    }
}
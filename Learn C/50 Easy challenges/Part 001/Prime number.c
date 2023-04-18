#include<stdio.h>
int main(){
    int val,flag = 1;

    scanf("%d",&val);
    for(int i =2;i<=val/2;i++){
        if(val%i==0){
            flag = 0;
            break;
        }else{
            continue;
        }
    }if(flag==1){
        printf("YES");
    }else{
        printf("NO");
    }
}//incomplete
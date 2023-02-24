#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(b%a==0&&c%b==0){
        printf("yes");
    }else{
        printf("no");
    }
}
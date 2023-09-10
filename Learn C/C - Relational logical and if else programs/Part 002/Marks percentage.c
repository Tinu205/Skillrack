#include<stdio.h>
int main(){
    int a,b,percent;
    scanf("%d%d",&a,&b);
    percent = (b*90)/100;
    if(a>=percent){
        printf("Yes");
    }else{
        printf("No");
    }
}
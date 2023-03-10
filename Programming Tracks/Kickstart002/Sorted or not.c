#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if((a>=b && b>=c) || (a<=b && b<=c)){
        printf("SORTED");
    }else{
        printf("NOTSORTED");
    }
}
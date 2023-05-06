#include<stdio.h>
int main(){
    int x,y,unit;
    scanf("%d%d",&x,&y);
    unit = x%10;
    if(y%unit == 0){
        printf("YES");
    }else{
        printf("NO");
    }
}
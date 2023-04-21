#include<stdio.h>
int main(){
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if((a==b)&&(b==c)&&(c==d)){
        printf("SQUARE");
    }else if((a==c)&&(b==d)){
        printf("RECTANGLE");
    }else{
        printf("QUADRILATERAL");
    }
}
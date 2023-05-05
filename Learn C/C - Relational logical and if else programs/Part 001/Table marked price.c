#include<stdio.h>
int main(){
    int x,y;
    int marked;
    scanf("%d%d",&x,&y);
    marked = (x*100)/(100-y);
    printf("%d",marked);
}
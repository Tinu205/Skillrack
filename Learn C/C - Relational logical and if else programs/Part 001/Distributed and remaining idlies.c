#include<stdio.h>
int main(){
    int m,n;
    scanf("%d%d",&m,&n);
    int r,w;
    r = m/n;
    w = m%n;
    printf("%d %d",r,w);
}
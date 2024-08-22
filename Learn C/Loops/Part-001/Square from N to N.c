#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    for(int i = a*a; i>=a; i--){
        printf("%d ",i);
    }
}
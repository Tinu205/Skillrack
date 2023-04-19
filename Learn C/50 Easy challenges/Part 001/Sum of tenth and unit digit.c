#include<stdio.h>
int main(){
    int val;
    scanf("%d",&val);
    printf("%d",val%10+(val%100)/10);
}
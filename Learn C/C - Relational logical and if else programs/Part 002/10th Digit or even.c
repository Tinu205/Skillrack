#include<stdio.h>
int main(){
    int a,tenth;
    scanf("%d",&a);
    tenth = (a%100)/10;
    if(tenth%2==0){
        printf("%d",a*a);
    }else{
        printf("%d",a*a*a);
    };
}
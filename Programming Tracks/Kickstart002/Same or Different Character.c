#include<stdio.h>
#include<string.h>
int main(){
    char a,b,c;
    scanf("%c %c %c",&a,&b,&c);
    if(a==b && b==c){
        printf("Different");
    }
    else if(a==b || b==c){
        printf("Same");
    }else{
        printf("Different");
    }
}
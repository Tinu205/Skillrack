#include<stdio.h>
int main(){
    char days[8][31] = {"Error","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};
    int value;
    scanf("%d",&value);
    printf("%s",days[value]);
    
}
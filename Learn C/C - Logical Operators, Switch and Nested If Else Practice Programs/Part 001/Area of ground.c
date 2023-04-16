#include<stdio.h>
int main(){
    float a,b,h;
    scanf("%f%f%f",&a,&b,&h);
    float value = ((a+b)*h)/2;
    printf("%f",value);
}
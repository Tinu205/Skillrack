#include<stdio.h>
int main(){
    int price;
    scanf("%d",&price);
    if(price==25000){
        printf("I3");
    }else if(price>25000 && price<50000){
        printf("I5");
    }else{
        printf("I7");
    }
}
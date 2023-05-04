#include<stdio.h>
int main(){
    int a,b,c,d,price,inhand,rem;
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&price);

    inhand = a*1+b*2+c*5+d*10;
    //printf("%d",inhand);2 5 10 5 , 5 16 3 12 150, 10 13 15 20 411

    if(price==inhand){

        printf("Paid");

    }else if(price>inhand){

        rem = price-inhand;
        printf("Not Paid %d",price-rem);

    }else{

        printf("Paid %d",inhand-price);

    }

}
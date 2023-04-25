#include<stdio.h>

float gst(float a){
  
    return a/10;
}
float get_price(int uni,float pri){
    float tot;
    tot = uni*pri;
    printf("%f+",tot);
    printf("%f=",gst(tot));
    tot+=gst(tot);
    return tot;
}
int main(){
    int unit;
    float price;
    scanf("%d",&unit);
    if (unit<=100){
        price = get_price(unit,2.00);
    }else if(unit >= 101 && unit<=200){
        price = get_price(unit,3.50);
    }else if(unit>500){
        price = get_price(unit,6.00);
    }else{
        price = get_price(unit,4.50);
    }
    printf("%.2f",price);
}
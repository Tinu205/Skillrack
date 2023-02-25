#include<stdio.h>
int main()
{
    float price,discount,discount_price;
    scanf("%f",&price);//gets the price
    discount = price*0.2;
    discount_price=price-discount;
    printf("%.2f",discount_price);
}
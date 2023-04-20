#include<stdio.h>
#include<stdlib.h>
//sum if both are even
//product if both or odd
//abs diff else

int main(){
    int num1,num2;
    scanf("%d%d",&num1,&num2);
    if((num1%2==0)&&(num2%2==0)){
        printf("%d",num1+num2);
    }else if((num1%2!=0)&&(num2%2 != 0)){
        printf("%d",num1*num2);
    }else{
        printf("%d",abs(num1-num2));
    }
}
